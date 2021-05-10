/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:33:28 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 07:53:42 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcmp_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("memcmp test");
	load_test(&testlist, "Basic Test          ", &memcmp_basic_test);
	load_test(&testlist, "Basic2 Test         ", &memcmp_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &memcmp_basic3_test);
	load_test(&testlist, "Null Test           ", &memcmp_null_test);
	return(launch_tests(&testlist));
}
