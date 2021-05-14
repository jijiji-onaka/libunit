/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:13:38 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("bzero test");
	load_test(&testlist, "Basic Test         ", &bzero_basic_test);
	load_test(&testlist, "Null Test          ", &bzero_null_test);
	load_test(&testlist, "BigSize Test       ", &bzero_bigsize_test);
	return (launch_tests(&testlist));
}
// load_test(&testlist, "Zero Test          ", &bzero_zero_test);
// load_test(&testlist, "Minus Test         ", &bzero_minus_test);
