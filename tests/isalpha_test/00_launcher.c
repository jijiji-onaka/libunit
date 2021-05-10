/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:50:31 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 11:48:47 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalpha_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("isalpha test");
	load_test(&testlist, "Basic Test          ", &isalpha_basic_test);
	load_test(&testlist, "Basic2 Test         ", &isalpha_basic2_test);
	load_test(&testlist, "All Test            ", &isalpha_all_test);
	return(launch_tests(&testlist));
}
