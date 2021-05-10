/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:59:45 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 09:22:27 by rmatsuka         ###   ########.fr       */
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
	return(launch_tests(&testlist));
}
