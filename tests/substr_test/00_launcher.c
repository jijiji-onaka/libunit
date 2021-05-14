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

int	substr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("substr test");
	load_test(&testlist, "Basic1 Test         ", &substr_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &substr_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &substr_basic3_test);
	load_test(&testlist, "Null Test           ", &substr_null_test);
	return (launch_tests(&testlist));
}
