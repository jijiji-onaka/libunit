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

int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strdup test");
	load_test(&testlist, "Basic Test         ", &strdup_basic_test);
	load_test(&testlist, "Empty Test         ", &strdup_empty_test);
	load_test(&testlist, "Long string Test   ", &strdup_long_str_test);
	return (launch_tests(&testlist));
}
