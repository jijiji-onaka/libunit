/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:54:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:24:51 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(void *(*func)(void *, const void *, size_t))
{
	pid_t	pid;
	int		status;
	char	s1[101];

	memset(s1, 'a', SIZE);
	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
	{
		func(s1, NULL, 5);
		exit(EXIT_SUCCESS);
	}
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	memmove_null1_test(void)
{
	g_failed_testcase = "char	s1[101];\
char	s2[101];\
\n\
memset(s1, 'a', 100);\
memset(s2, 'a', 100);\
ft_memmove(s1, NULL, 5);\
memmove(s2, NULL, 5);";
	if (do_fork(ft_memmove) == do_fork(memmove))
		return (0);
	else
		return (-1);
}
