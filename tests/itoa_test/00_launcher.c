/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:33:28 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 20:22:25 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	itoa_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("itoa test");
	load_test(&testlist, "Basic Test          ", &itoa_basic_test);
	load_test(&testlist, "IntMax Test         ", &itoa_intmax_test);
	load_test(&testlist, "IntMin Test         ", &itoa_intmin_test);
	load_test(&testlist, "Zero Test           ", &itoa_zero_test);
	return(launch_tests(&testlist));
}
