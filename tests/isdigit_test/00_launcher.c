/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:50:31 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 07:38:18 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isdigit_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("isdigit test");
	load_test(&testlist, "Basic1 Test         ", &isdigit_basic1_test);
	load_test(&testlist, "Basic2 Test         ", &isdigit_basic2_test);
	load_test(&testlist, "All Test            ", &isdigit_all_test);
	return(launch_tests(&testlist));
}
