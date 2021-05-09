/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:28:33 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 21:55:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	signal_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("signal test");
	load_test(&testlist, "True Test   ", &signal_true_test);
	load_test(&testlist, "False Test  ", &signal_false_test);
	load_test(&testlist, "Segv Test   ", &signal_segfault_test);
	load_test(&testlist, "buse Test   ", &signal_bus_error_test);
	return(launch_tests(&testlist));
}
