/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:33:28 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 07:39:05 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("memccpy test");
	load_test(&testlist, "Basic1 Test         ", &memccpy_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &memccpy_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &memccpy_basic3_test);
	load_test(&testlist, "Null Test           ", &memccpy_null_test);
	return(launch_tests(&testlist));
}
