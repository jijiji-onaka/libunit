/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:28:33 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 21:55:43 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	print_title("strlen test");
	load_test(&testlist, "Basic Test         ", &strlen_basic_test);
	load_test(&testlist, "Null Test          ", &strlen_null_test);
	load_test(&testlist, "Long string Test   ", &strlen_long_string_test);
	return(launch_tests(&testlist));
}
