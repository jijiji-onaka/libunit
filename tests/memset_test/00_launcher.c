/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:33:28 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 08:31:03 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memset_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("memset test");
	load_test(&testlist, "Basic Test          ", &memset_basic_test);
	load_test(&testlist, "Basic2 Test         ", &memset_basic2_test);
	load_test(&testlist, "Basic3 Test         ", &memset_basic3_test);
	load_test(&testlist, "Null Test           ", &memset_null_test);
	return(launch_tests(&testlist));
}
