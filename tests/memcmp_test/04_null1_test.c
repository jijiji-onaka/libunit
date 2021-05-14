/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:37:24 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(int (*func)(const void *, const void *, size_t))
{
	pid_t	pid;
	int		status;
	char	*s1;

	s1 = "hello";
	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
	{
		func(s1, NULL, 10);
		exit(EXIT_SUCCESS);
	}
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	memcmp_null1_test(void)
{
	g_failed_testcase = "char	*s1;\
\n\
s1 = \"hello\";\
ft_memcmp(s1, NULL, 10);\
memcmp(s1, NULL, 10);";
	if (do_fork(ft_memcmp) == do_fork(memcmp))
		return (0);
	else
		return (-1);
}
