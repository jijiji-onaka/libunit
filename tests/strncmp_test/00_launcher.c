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

int	strncmp_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strncmp test");
	load_test(&testlist, "Basic1 Test         ", &strncmp_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &strncmp_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &strncmp_basic3_test);
	load_test(&testlist, "Basic4 Test         ", &strncmp_basic4_test);
	load_test(&testlist, "Null1 Test          ", &strncmp_null1_test);
	load_test(&testlist, "Null2 Test          ", &strncmp_null2_test);
	load_test(&testlist, "Null3 Test          ", &strncmp_null3_test);
	load_test(&testlist, "Null4 Test          ", &strncmp_null4_test);
	load_test(&testlist, "Null5 Test          ", &strncmp_null5_test);
	load_test(&testlist, "Null6 Test          ", &strncmp_null6_test);
	return (launch_tests(&testlist));
}
