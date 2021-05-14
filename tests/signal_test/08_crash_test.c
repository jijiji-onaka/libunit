/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_crash_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:31:50 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 04:53:09 by tjinichi         ###   ########.fr       */
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

static bool	do_crash(void)
{
	asm("int3");
	return (true);
}

int	signal_crash_test(void)
{
	g_failed_testcase = "asm(\"int3\");";
	if (do_fork(do_crash) == 0)
		return (0);
	else
		return (-1);
}
