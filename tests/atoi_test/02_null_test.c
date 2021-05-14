/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:43:03 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:53:28 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(int (*func)(const char *))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
		exit(func(NULL));
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	atoi_null_test(void)
{
	g_failed_testcase = "if (ft_atoi(NULL) == atoi(NULL))\
	return (0);\
else\
	return (-1);";
	if (do_fork(ft_atoi) == do_fork(atoi))
		return (0);
	else
		return (-1);
}
