/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:09:45 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:04:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./tester.h"

void	print_title(char *title)
{
	write(STDOUT_FILENO, COLOR_YELLOW, 5);
	write(STDOUT_FILENO, BOLD, 4);
	write(STDOUT_FILENO, "----------------- ", 18);
	write(g_result_file_fd, "----------------- ", 18);
	ft_putstr_fd(title, STDOUT_FILENO);
	ft_putstr_fd(title, g_result_file_fd);
	write(g_result_file_fd, " -----------------\n", 19);
	write(STDOUT_FILENO, " -----------------\n", 19);
	write(STDOUT_FILENO, COLOR_RESET, 4);
}

static int	print_result(bool ok_or_ko)
{
	write(STDOUT_FILENO, BOLD, 4);
	if (ok_or_ko == OK)
		write(STDOUT_FILENO, "\033[32mAll test clear !\n", 22);
	else
	{
		write(STDOUT_FILENO, "\033[31mTest failed ..\n", 20);
		write(STDOUT_FILENO, "\n\033[38;5;87mSee result.log !\n", 29);
	}
	write(STDOUT_FILENO, COLOR_RESET, 4);
	if (ok_or_ko == OK)
		return (0);
	else
		return (-1);
}

static void	test_2(int *test_ret)
{
	*test_ret += memcmp_launcher();
	puts("");
	*test_ret += memcpy_launcher();
	puts("");
	*test_ret += memmove_launcher();
	puts("");
	*test_ret += memset_launcher();
	puts("");
	*test_ret += split_launcher();
	puts("");
	*test_ret += strchr_launcher();
	puts("");
	*test_ret += strdup_launcher();
	puts("");
	*test_ret += strjoin_launcher();
	puts("");
	*test_ret += strlcat_launcher();
	puts("");
	*test_ret += strlcpy_launcher();
	puts("");
	*test_ret += strlen_launcher();
	puts("");
	*test_ret += strmapi_launcher();
	puts("");
}

static void	test_1(int *test_ret)
{
	*test_ret += signal_launcher();
	puts("");
	*test_ret += atoi_launcher();
	puts("");
	*test_ret += bzero_launcher();
	puts("");
	*test_ret += calloc_launcher();
	puts("");
	*test_ret += isalnum_launcher();
	puts("");
	*test_ret += isalpha_launcher();
	puts("");
	*test_ret += isascii_launcher();
	puts("");
	*test_ret += isdigit_launcher();
	puts("");
	*test_ret += isprint_launcher();
	puts("");
	*test_ret += itoa_launcher();
	puts("");
	*test_ret += memccpy_launcher();
	puts("");
	*test_ret += memchr_launcher();
	puts("");
}

int	main(void)
{
	int	test_ret;

	g_result_file_fd = open("result.log", O_CREAT | O_TRUNC | O_RDWR, 0644);
	test_ret = 0;
	test_1(&test_ret);
	test_2(&test_ret);
	test_ret += strncmp_launcher();
	puts("");
	test_ret += strnstr_launcher();
	puts("");
	test_ret += strrchr_launcher();
	puts("");
	test_ret += strtrim_launcher();
	puts("");
	test_ret += substr_launcher();
	puts("");
	test_ret += tolower_launcher();
	puts("");
	test_ret += toupper_launcher();
	puts("");
	close(g_result_file_fd);
	if (test_ret == TEST_NUM)
		return (print_result(OK));
	return (print_result(KO));
}
