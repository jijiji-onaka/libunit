/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:30:31 by tjinichi         ###   ########.fr       */
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
		exit(func(NULL, "he\xffllo", 0));
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	strncmp_null2_test(void)
{
	g_failed_testcase = "if (strncmp(NULL, \"\xff\", 0) == \
ft_strncmp(NULL, \"\xff\", 0))\
	return (0);\
else\
	return (-1);";
	if (do_fork(strncmp) == do_fork(ft_strncmp))
		return (0);
	else
		return (-1);
}
