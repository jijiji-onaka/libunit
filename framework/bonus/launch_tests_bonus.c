/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 11:06:01 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

static void	put_signal(int status)
{
	if (status == SIGSEGV)
		put_status("\033[38;5;153m", "[SEGV]");
	else if (status == SIGBUS)
		put_status("\033[38;5;80m", "[BUSE]");
	else if (status == SIGALRM)
		put_status("\033[38;5;75m", "[TIMEOUT]");
	else if (status == SIGABRT)
		put_status("\033[38;5;13m", "[ABRT]");
	else if (status == SIGFPE)
		put_status("\033[38;5;112m", "[FPE]");
	else if (status == ILL_ILLOPC)
		put_status("\033[38;5;214m", "[ILL]");
	else
		put_status("\033[38;5;220m", "[CRASH]");
}

static int	check_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			put_status("\033[38;5;2m", "[OK]");
			return (1);
		}
		else if (WEXITSTATUS(status) == 255)
		{
			put_status("\033[38;5;9m", "[KO]");
		}
	}
	if (WIFSIGNALED(status))
		put_signal(status);
	write(g_result_file_fd, "[Test case] :\n\n", 15);
	put_testcase(g_buf);
	g_buf[0] = '\0';
	bzero(g_buf, 1023);
	return (0);
}

static int	put_result(int success_cnt, int tests_cnt)
{
	write(g_result_file_fd, "\n", 1);
	printf("\033[36m%d/%d tests passed\033[49m", success_cnt, tests_cnt);
	if (tests_cnt == success_cnt)
	{
		printf("  \033[38;5;2mOK\033[0m\n");
		return (1);
	}
	else
		printf("  \033[38;5;9mKO\033[0m\n");
	return (0);
}

static int	run_test(int (*f)(void), char *test_name)
{
	pid_t	pid;
	int		status;
	int		pipe_fd[2];

	if (pipe(pipe_fd) == -1)
		exit_fatal(__LINE__, __FILE__);
	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	else if (pid == 0)
		child_process(pipe_fd, f, test_name);
	close(pipe_fd[1]);
	bzero(g_buf, 1024);
	read(pipe_fd[0], g_buf, 1023);
	close(pipe_fd[0]);
	if (wait(&status) == -1)
		exit_fatal(__LINE__, __FILE__);
	g_failed_testcase = NULL;
	return (check_status(status));
}

int	launch_tests(t_unit_test **list)
{
	t_unit_test	*testlist;
	int			tests_cnt;
	int			success_cnt;

	if (*list == NULL)
		return (0);
	testlist = NULL;
	testlist = *list;
	tests_cnt = 0;
	success_cnt = 0;
	while (testlist)
	{
		ft_put_s("> ", STDOUT_FILENO);
		ft_put_s(testlist->name, STDOUT_FILENO);
		ft_put_s(" : ", STDOUT_FILENO);
		ft_put_s("> ", g_result_file_fd);
		ft_put_s(testlist->name, g_result_file_fd);
		ft_put_s(" : ", g_result_file_fd);
		success_cnt += run_test(testlist->f, testlist->name);
		tests_cnt++;
		testlist = testlist->next;
	}
	testlist_clear(list);
	return (put_result(success_cnt, tests_cnt));
}
