/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/09 20:51:54 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"


static void ft1(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen((const char *)s));
}


static int  check_status(int status)
{
    if (WIFEXITED(status))      // 子プロセスが正常終了ならtrue
    {
        if (status == 0)        // success
        {
            ft1("[OK]\n", STDOUT_FILENO);
            return (1);
        }
        else if (status == 256) // 255?
        {
            ft1("[KO]\n", STDOUT_FILENO);
            return (0);
        }
    }
    if (WIFSIGNALED(status))        // 子プロセスがシグナルにより終了した場合 true
    {
        if (WTERMSIG(status) == SIGSEGV)
            ft1("[SEGV]\n", STDOUT_FILENO);
        if (WTERMSIG(status) == SIGBUS)
            ft1("[BUS]\n", STDOUT_FILENO);
    }
    return (0);
}

static int run_test(int (*f)(void))
{
    int pid;
    int status;

    pid = fork();
    if (pid < 0)                // fail
        ft1("error\n", STDOUT_FILENO);   // error処理？
    else if (pid == 0)          // child process
        exit(f());
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
        ft1("> ", STDOUT_FILENO);
        ft1(testlist->name, STDOUT_FILENO);
        ft1(" : ", STDOUT_FILENO);
        success_cnt += run_test(testlist->f);
        tests_cnt++;
        testlist = testlist->next;
    }
    return (0);
}
