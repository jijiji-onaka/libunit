/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:13:38 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 08:38:51 by rmatsuka         ###   ########.fr       */
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
	load_test(&testlist, "Zero Test          ", &bzero_zero_test);
	load_test(&testlist, "BigSize Test       ", &bzero_bigsize_test);
	load_test(&testlist, "Minus Test         ", &bzero_minus_test);
	return(launch_tests(&testlist));
}
