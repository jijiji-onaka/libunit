/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 03:27:37 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 11:02:55 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	child_process(int pipe_fd[2], int (*f)(void), char *test_name)
{
	int	ret;

	close(pipe_fd[0]);
	if (strcmp(test_name, "Long string Test   ") == 0)
		alarm(30);
	else
		alarm(2);
	ret = f();
	if (g_failed_testcase)
	{
		write(pipe_fd[1], g_failed_testcase, strlen(g_failed_testcase));
		write(pipe_fd[1], "\n", 1);
	}
	close(pipe_fd[1]);
	exit(ret);
}
