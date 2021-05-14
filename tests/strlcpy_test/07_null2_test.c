/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:52:00 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	src[10] = \"42Tokyo\";\
size_t	res1;\
size_t	res2;\
\n\
res1 = ft_strlcpy(NULL, src, 1);\
res2 = strlcpy(NULL, src, 1);\
if (res1 == res2)\
	return (true);\
else\
	return (false);";
}

static int	do_fork(size_t (*func)(char *, const char *, size_t))
{
	pid_t		pid;
	int			status;
	const char	src[10] = "42Tokyo";

	set_testcase();
	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	if (pid == 0)
		exit(func(NULL, src, 1));
	else
		wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else
		return (WTERMSIG(status));
}

int	strlcpy_null2_test(void)
{
	if (do_fork(ft_strlcpy) == do_fork(strlcpy))
		return (0);
	else
		return (-1);
}
