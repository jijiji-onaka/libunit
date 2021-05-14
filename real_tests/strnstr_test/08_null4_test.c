/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_null4_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:33:05 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(char *(*func)(const char *, const char *, size_t))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
	{
		func(NULL, "a", 1);
		exit(EXIT_SUCCESS);
	}
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	strnstr_null4_test(void)
{
	g_failed_testcase = "if (strnstr(NULL, \"a\", 1) == \
ft_strnstr(NULL, \"a\", 1))\
	return (0);\
else\
	return (-1);";
	if (do_fork(ft_strnstr) == do_fork(strnstr))
		return (0);
	else
		return (-1);
}
