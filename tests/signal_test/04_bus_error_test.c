/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:52:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:52:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(bool (*func)(void))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
		exit(func());
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

static bool	do_bus_error(void)
{
	char	*str;

	str = "32Tokyo";
	str[0] = '4';
	return (true);
}

int	signal_bus_error_test(void)
{
	g_failed_testcase = "char	*str;\
\n\
str = \"32Tokyo\";\
str[0] = '4';";
	if (do_fork(do_bus_error) == 0)
		return (0);
	else
		return (-1);
}
