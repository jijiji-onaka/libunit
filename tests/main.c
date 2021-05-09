/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:09:45 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 14:16:01 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./signal_test.h"

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

int	main(void)
{
	int	test_ret;

	test_ret = 0;
	test_ret += signal_launcher();
	if (test_ret == 1)
		return (print_result(OK));
	else
		return (print_result(KO));
}
