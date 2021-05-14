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

int	strlcat_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strlcat test");
	load_test(&testlist, "Basic1 Test         ", &strlcat_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &strlcat_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &strlcat_basic3_test);
	load_test(&testlist, "Basic4 Test         ", &strlcat_basic4_test);
	load_test(&testlist, "Basic5 Test         ", &strlcat_basic5_test);
	load_test(&testlist, "Null1 Test          ", &strlcat_null1_test);
	load_test(&testlist, "Null2 Test          ", &strlcat_null2_test);
	return (launch_tests(&testlist));
}
