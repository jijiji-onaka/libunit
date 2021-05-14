/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:59:45 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	calloc_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("calloc test");
	load_test(&testlist, "Basic Test         ", &calloc_basic_test);
	load_test(&testlist, "Zero Test          ", &calloc_zero_test);
	load_test(&testlist, "BigSize Test       ", &calloc_bigsize_test);
	load_test(&testlist, "Minus Test         ", &calloc_minus_test);
	return (launch_tests(&testlist));
}
