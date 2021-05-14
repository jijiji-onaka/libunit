/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null3_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:33:00 by tjinichi         ###   ########.fr       */
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
		func(NULL, NULL, 0);
		exit(EXIT_SUCCESS);
	}
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	strnstr_null3_test(void)
{
	g_failed_testcase = "if (strnstr(NULL, NULL, 0) == \
ft_strnstr(NULL, NULL, 0))\
	return (0);\
else\
	return (-1);";
	if (do_fork(ft_strnstr) == do_fork(strnstr))
		return (0);
	else
		return (-1);
}
