/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:50:31 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:54 by tjinichi         ###   ########.fr       */
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
	return (launch_tests(&testlist));
}
