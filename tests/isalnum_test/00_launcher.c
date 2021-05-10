/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:08:57 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 10:10:07 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalnum_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("isalnum test");
	load_test(&testlist, "Basic Test          ", &isalnum_basic_test);
	load_test(&testlist, "False Test          ", &isalnum_false_test);
	load_test(&testlist, "AllNum Test         ", &isalnum_allnum_test);
	return(launch_tests(&testlist));
}
