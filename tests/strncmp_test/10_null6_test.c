/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_null6_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:32:14 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(int (*func)(const char *, const char *, size_t))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
		exit(func(NULL, NULL, 1));
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	strncmp_null6_test(void)
{
	g_failed_testcase = "if (strncmp(NULL, NULL, 1) == \
ft_strncmp(NULL, NULL, 1))\
	return (0);\
else\
	return (-1);";
	if (do_fork(ft_strncmp) == do_fork(strncmp))
		return (0);
	else
		return (-1);
}
