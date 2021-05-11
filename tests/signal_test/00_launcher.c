/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:28:33 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/12 08:46:53 by rmatsuka         ###   ########.fr       */
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
	load_test(&testlist, "Time Test   ", &signal_time_error_test);
	load_test(&testlist, "Abort Test  ", &signal_sigabrt_test);
	load_test(&testlist, "Crash Test  ", &signal_crash_test);
	return(launch_tests(&testlist));
}
