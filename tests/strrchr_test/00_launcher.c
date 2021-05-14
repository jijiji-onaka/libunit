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

int	strrchr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strrchr test");
	load_test(&testlist, "Basic Test          ", &strrchr_basic_test);
	load_test(&testlist, "Empty1 Test         ", &strrchr_empty1_test);
	load_test(&testlist, "Empty2 Test         ", &strrchr_empty2_test);
	load_test(&testlist, "Empty3 Test         ", &strrchr_empty3_test);
	load_test(&testlist, "Match head Test     ", &strrchr_match_head_test);
	load_test(&testlist, "Match tail Test     ", &strrchr_match_tail_test);
	return (launch_tests(&testlist));
}
