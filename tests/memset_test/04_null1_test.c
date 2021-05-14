/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:54:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:46:49 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(void *(*func)(void *, int, size_t))
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
		func(NULL, '\0', SIZE);
		exit(EXIT_SUCCESS);
	}
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	memset_null1_test(void)
{
	g_failed_testcase = "ft_memset(NULL, '\\0', 100);\
memset(NULL, '\\0', 100);";
	if (do_fork(ft_memset) == do_fork(memset))
		return (0);
	else
		return (-1);
}
