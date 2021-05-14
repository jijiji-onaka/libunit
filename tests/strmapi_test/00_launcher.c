/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:28:33 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:40 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strmapi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strmapi test");
	load_test(&testlist, "Basic Test          ", &strmapi_basic_test);
	load_test(&testlist, "Null1 Test          ", &strmapi_null1_test);
	load_test(&testlist, "Null2 Test          ", &strmapi_null2_test);
	load_test(&testlist, "Null3 Test          ", &strmapi_null3_test);
	return (launch_tests(&testlist));
}
