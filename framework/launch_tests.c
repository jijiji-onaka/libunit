/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 14:22:55 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	check_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ft_put_s("\033[32m[OK]\033[0m\n", STDOUT_FILENO);
			return (1);
		}
		else if (WEXITSTATUS(status) == 255)
			ft_put_s("\033[31m[KO]\033[0m\n", STDOUT_FILENO);
	}
	if (WIFSIGNALED(status))
	{
		if (status == SIGSEGV)
			ft_put_s("\033[31m[SEGV]\033[0m\n", STDOUT_FILENO);
		else if (status == SIGBUS)
			ft_put_s("\033[31m[BUS]\033[0m\n", STDOUT_FILENO);
		else if (status == SIGALRM)
			ft_put_s("\033[31m[TIME]\033[0m\n", STDOUT_FILENO);
		else if (status == SIGABRT)
			ft_put_s("\033[31m[ABRT]\033[0m\n", STDOUT_FILENO);
		else if (status == SIGFPE)
			ft_put_s("\033[31m[FPE]\033[0m\n", STDOUT_FILENO);
		else
			ft_put_s("\033[31m[CRASH]\033[0m\n", STDOUT_FILENO);

	}
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
	//if (BONUS) ??
		alarm(2);
		exit(f());
	}
	wait(&status);
	return (check_status(status));
}

static int	put_result(int success_cnt, int tests_cnt)
{
	printf("\033[36m%d/%d tests passed\033[49m", success_cnt, tests_cnt);
	if (tests_cnt == success_cnt)
	{
		printf("  \x1b[32mOK\x1b[39m\n");
		return (1);
	}
	else
		printf("  \033[31mKO\033[39m\n");
	return (0);
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
		success_cnt += run_test(testlist->f);
		tests_cnt++;
		testlist = testlist->next;
	}
	testlist_clear(list);
	return (put_result(success_cnt, tests_cnt));
}
