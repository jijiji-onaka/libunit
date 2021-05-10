/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:35:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 22:12:48 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void ft1(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen((const char *)s));
}

void	ft_putchar_fd_1(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd_1(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		ft_putchar_fd_1('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd_1(num / 10, fd);
		ft_putnbr_fd_1(num % 10, fd);
	}
	else
		ft_putchar_fd_1(num + '0', fd);
}

// exit_fatal(__LINE__, __FILE__);
void	exit_fatal(int line, char *file)
{
	write(STDERR_FILENO, "STDLIB ERROR\n", 13);
	ft1(file, STDERR_FILENO);
	write(STDERR_FILENO, ":", 1);
	ft_putnbr_fd_1(line, STDERR_FILENO);
	write(STDERR_FILENO, "\n", 1);
}

static int  check_status(int status)
{
    if (WIFEXITED(status))      // 子プロセスが正常終了ならtrue
    {
        // puts("111111");
        // printf("%d\n", status);
        // printf("%d\n", WEXITSTATUS(status));
        if (!WEXITSTATUS(status))        // success
        {
            ft1("[OK]\n", STDOUT_FILENO);
            return (1);
        }
        else if (WEXITSTATUS(status) == 255) // 255?
        {
            ft1("[KO]\n", STDOUT_FILENO);
            return (0);
        }
    }
    else if (WIFSIGNALED(status))        // 子プロセスがシグナルにより終了した場合 true
    {
        // printf("%d\n", status);
        // printf("%d\n", WTERMSIG(status));
        // status = 11;
        if (WTERMSIG(status) == SIGSEGV)
            ft1("[SEGV]\n", STDOUT_FILENO);
        if (WTERMSIG(status) == SIGBUS)
            ft1("[BUS]\n", STDOUT_FILENO);
        return (0);
    }
    return (0);
}

int a()
{
    char *ptr = NULL;
        *ptr ='a';
    return (12);
}

static int run_test(int (*f)(void))
{
    int pid;
    int status;

    // (void)f;
    // signal(SIGSEGV, NULL);
    // signal(SIGBUS, NULL);
    pid = fork();
    status = 0;
    if (pid < 0)                // fail
        exit_fatal(__LINE__, __FILE__);   // error処理？
    else if (pid == 0)          // child process
    {
        // char *ptr = NULL;
        // *ptr ='a';
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
        ft1("> ", STDOUT_FILENO);
        ft1(testlist->name, STDOUT_FILENO);
        ft1(" : ", STDOUT_FILENO);
        // printf("> %s : ", testlist->name);
        // fflush(stdout);
        success_cnt += run_test(testlist->f);
        tests_cnt++;
        testlist = testlist->next;
    }
    // printf("> %s : ", "ok\n");
    return (1);
}
