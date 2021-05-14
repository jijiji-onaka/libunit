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

int	strjoin_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strjoin test");
	load_test(&testlist, "Basic Test          ", &strjoin_basic_test);
	load_test(&testlist, "Empty1 Test         ", &strjoin_empty1_test);
	load_test(&testlist, "Empty2 Test         ", &strjoin_empty2_test);
	load_test(&testlist, "Empty3 Test         ", &strjoin_empty3_test);
	load_test(&testlist, "Null1 Test          ", &strjoin_null1_test);
	load_test(&testlist, "Null2 Test          ", &strjoin_null2_test);
	load_test(&testlist, "Null3 Test          ", &strjoin_null3_test);
	return (launch_tests(&testlist));
}
