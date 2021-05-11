/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 13:33:23 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int  check_status(int status)
{
    if (WIFEXITED(status))
    {
        if (!WEXITSTATUS(status))
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
    {
        if() // waitの返り値チェック
        wait(&status);
    }
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
    {
        printf("  \x1b[32mOK\x1b[39m\n");
        return (1);
    }
    else
    {
        printf("  \x1b[31mKO\x1b[39m\n");
        return  (0);
    }
}
