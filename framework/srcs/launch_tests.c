/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 05:50:07 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

static void	put_signal(int status)
{
	if (status == SIGSEGV)
		put_status("\033[38;5;153m", "[SEGV]");
	else if (status == SIGBUS)
		put_status("\033[38;5;80m", "[BUSE]");
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
	return (0);
}

static int	put_result(int success_cnt, int tests_cnt)
{
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

static int	run_test(int (*f)(void))
{
	int	pid;
	int	status;

	pid = fork();
	if (pid < 0)
		exit_fatal(__LINE__, __FILE__);
	else if (pid == 0)
	{
		exit(f());
	}
	wait(&status);
	return (check_status(status));
}

int	launch_tests(t_unit_test **list)
{
	t_unit_test	*testlist;
	int			tests_cnt;
	int			success_cnt;

	if (*list == NULL)
		return (0);
	testlist = *list;
	tests_cnt = 0;
	success_cnt = 0;
	while (testlist)
	{
		if (search_test(testlist->name, "Time Test   ") == 0)
			break ;
		ft_put_s("> ", STDOUT_FILENO);
		ft_put_s(testlist->name, STDOUT_FILENO);
		ft_put_s(" : ", STDOUT_FILENO);
		ft_put_s("> ", g_result_file_fd);
		ft_put_s(testlist->name, g_result_file_fd);
		ft_put_s(" : ", g_result_file_fd);
		success_cnt += run_test(testlist->f);
		tests_cnt++;
		testlist = testlist->next;
	}
	testlist_clear(list);
	return (put_result(success_cnt, tests_cnt));
}
