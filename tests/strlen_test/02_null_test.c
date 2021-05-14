/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 02:56:08 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static int	do_fork(size_t (*func)(const char *))
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

int	strlen_null_test(void)
{
	g_failed_testcase = "if (ft_strlen(NULL) == strlen(NULL))\
	return (0);\
else\
	return (-1);";
	if (do_fork(ft_strlen) == do_fork(strlen))
		return (0);
	else
		return (-1);
}
