/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_time_error_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:02:43 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 04:52:30 by tjinichi         ###   ########.fr       */
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

static bool	do_time_error(void)
{
	while (42)
		;
	return (true);
}

int	signal_time_error_test(void)
{
	g_failed_testcase = "while (42)\
	;\
";
	if (do_fork(do_time_error) == 0)
		return (0);
	else
		return (-1);
}
