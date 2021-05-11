/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:33:28 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 07:39:33 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("memcpy test");
	load_test(&testlist, "Basic1 Test         ", &memcpy_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &memcpy_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &memcpy_basic3_test);
	load_test(&testlist, "Null Test           ", &memcpy_null_test);
	return(launch_tests(&testlist));
}
