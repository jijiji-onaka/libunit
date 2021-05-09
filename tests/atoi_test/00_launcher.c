/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:28:33 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/09 22:51:46 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("atoi test");
	load_test(&testlist, "Basic Test         ", &atoi_basic_test);
	load_test(&testlist, "Null Test          ", &atoi_null_test);
	load_test(&testlist, "IntMax Test        ", &atoi_intmax_test);
	load_test(&testlist, "IntMin Test        ", &atoi_intmin_test);
	load_test(&testlist, "Space Test         ", &atoi_space_test);
	return(launch_tests(&testlist));
}
