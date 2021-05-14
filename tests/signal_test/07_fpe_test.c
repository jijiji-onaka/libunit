/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_fpe_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:43:51 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 09:36:44 by rmatsuka         ###   ########.fr       */
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

static bool	do_fpe(void)
{
	int	i;

	i = 0;
	if (1 / i)
		return (true);
	else
		return (false);
}

int	signal_fpe_test(void)
{
	g_failed_testcase = "int	i;\
\n\
i = 0;\
if (1 / i)\
	return (true);\
else\
	return (false);";
	if (do_fork(do_fpe) == 0)
		return (0);
	else
		return (-1);
}
