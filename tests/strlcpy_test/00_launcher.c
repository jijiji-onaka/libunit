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

int	strlcpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strlcpy test");
	load_test(&testlist, "Basic1 Test         ", &strlcpy_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &strlcpy_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &strlcpy_basic3_test);
	load_test(&testlist, "Basic4 Test         ", &strlcpy_basic4_test);
	load_test(&testlist, "Basic5 Test         ", &strlcpy_basic5_test);
	load_test(&testlist, "Null1 Test          ", &strlcpy_null1_test);
	load_test(&testlist, "Null2 Test          ", &strlcpy_null2_test);
	return (launch_tests(&testlist));
}
