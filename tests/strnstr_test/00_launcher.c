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

int	strnstr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strnstr test");
	load_test(&testlist, "Basic1 Test         ", &strnstr_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &strnstr_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &strnstr_basic3_test);
	load_test(&testlist, "Basic4 Test         ", &strnstr_basic4_test);
	load_test(&testlist, "Null1 Test          ", &strnstr_null1_test);
	load_test(&testlist, "Null2 Test          ", &strnstr_null2_test);
	load_test(&testlist, "Null3 Test          ", &strnstr_null3_test);
	load_test(&testlist, "Null4 Test          ", &strnstr_null4_test);
	return (launch_tests(&testlist));
}
