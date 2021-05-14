/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:33:28 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memmove_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("memmove test");
	load_test(&testlist, "Basic1 Test         ", &memmove_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &memmove_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &memmove_basic3_test);
	load_test(&testlist, "Null1 Test          ", &memmove_null1_test);
	load_test(&testlist, "Null2 Test          ", &memmove_null2_test);
	return (launch_tests(&testlist));
}
