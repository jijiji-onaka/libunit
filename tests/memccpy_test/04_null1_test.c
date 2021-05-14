/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:54:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:21:08 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(void *(*func)(void *, const void *, int, size_t))
{
	pid_t	pid;
	int		status;
	char	s1[10];

	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
	{
		func(s1, NULL, 'a', 10);
		exit(EXIT_SUCCESS);
	}
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	memccpy_null1_test(void)
{
	g_failed_testcase = "char	s1[10];\
char	s2[10];\
\n\
ft_memccpy(s1, NULL, 'a', 10);\
memccpy(s2, NULL, 'a', 10);";
	if (do_fork(ft_memccpy) == do_fork(memccpy))
		return (0);
	else
		return (-1);
}
