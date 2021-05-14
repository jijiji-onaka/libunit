/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:28:33 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strtrim_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strtrim test");
	load_test(&testlist, "Basic1 Test          ", &strtrim_basic1_test);
	load_test(&testlist, "Basic2 Test          ", &strtrim_basic2_test);
	load_test(&testlist, "Basic3 Test          ", &strtrim_basic3_test);
	load_test(&testlist, "Same String Test     ", &strtrim_same_test);
	load_test(&testlist, "Null1 Test           ", &strtrim_null1_test);
	load_test(&testlist, "Null2 Test           ", &strtrim_null2_test);
	load_test(&testlist, "Null3 Test           ", &strtrim_null3_test);
	return (launch_tests(&testlist));
}
