/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:09:45 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 21:16:12 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./tester.h"

void	print_title(char *title)
{
	write(STDOUT_FILENO, COLOR_YELLOW, 5);
	write(STDOUT_FILENO, BOLD, 4);
	ft_putstr_fd(title, STDOUT_FILENO);
	write(STDOUT_FILENO, COLOR_RESET, 4);
}

static int	print_result(bool ok_or_ko)
{
	write(STDOUT_FILENO, BOLD, 4);
	if (ok_or_ko == OK)
		write(STDOUT_FILENO, "\033[32mAll test clear !", 21);
	else
		write(STDOUT_FILENO, "\033[31mTest failed ..", 19);
	write(STDOUT_FILENO, COLOR_RESET, 4);
	if (ok_or_ko == OK)
		return (0);
	else
		return (-1);
}

# define TEST_NUM 2

int	main(void)
{
	int	test_ret;

	test_ret = 0;
	test_ret += signal_launcher();
	puts("");
	test_ret += strlen_launcher();
	puts("");
	if (test_ret == TEST_NUM)
		return (print_result(OK));
	else
		return (print_result(KO));
}
