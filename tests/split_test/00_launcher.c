/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:40:11 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	split_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("split test");
	load_test(&testlist, "Basic Test         ", &split_basic_test);
	load_test(&testlist, "Empty1 Test        ", &split_empty1_test);
	load_test(&testlist, "Empty2 Test        ", &split_empty2_test);
	load_test(&testlist, "Empty3 Test        ", &split_empty3_test);
	load_test(&testlist, "Same chr Test      ", &split_same_str_test);
	load_test(&testlist, "Null Test          ", &split_null_test);
	return (launch_tests(&testlist));
}
