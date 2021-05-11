/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 12:16:30 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void ft_put_s(char *s, int fd)
{
    int i;

	if (s == NULL)
		return ;
    i = 0;
    while (s[i])
        i++;
	write(fd, s, i);
}

void	ft_put_c(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_put_d(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		ft_put_c('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_put_d(num / 10, fd);
		ft_put_d(num % 10, fd);
	}
	else
		ft_put_c(num + '0', fd);
}

static int  check_status(int status)
{
    if (WIFEXITED(status))
    {
        if (!WEXITSTATUS(status))        // success
        {
            ft_put_s("[OK]\n", STDOUT_FILENO);
            return (1);
        }
        else if (WEXITSTATUS(status) == 255)
        {
            ft_put_s("[KO]\n", STDOUT_FILENO);
            return (0);
        }
    }
    else if (WIFSIGNALED(status))        // 子プロセスがシグナルにより終了した場合 true
    {
        // printf("%d\n", status);
        // printf("%d\n", WTERMSIG(status));
        // status = 11;
        if (WTERMSIG(status) == SIGSEGV)
            ft_put_s("[SEGV]\n", STDOUT_FILENO);
        if (WTERMSIG(status) == SIGBUS)
            ft_put_s("[BUS]\n", STDOUT_FILENO);
        return (0);
    }
    return (0);
}

static int run_test(int (*f)(void))
{
    int pid;
    int status;

    pid = fork();
    status = 0;
    if (pid < 0)
        exit_fatal(__LINE__, __FILE__);
    else if (pid == 0)
    {
        exit(f());
    }
    else
        wait(&status);
    return (check_status(status));
}

int launch_tests(t_unit_test **list)
{
    t_unit_test *testlist;
    int         tests_cnt;
    int         success_cnt;

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
    printf("\x1b[36m%d/%d tests checked\x1b[49m", success_cnt, tests_cnt);
    if (tests_cnt == success_cnt)
        printf("  \x1b[32m%s\x1b[39m  ", "OK\n");
    else
        printf("  \x1b[31m%s\x1b[39m ", "KO\n");
    return (1);
}
