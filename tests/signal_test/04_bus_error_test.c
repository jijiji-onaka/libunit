/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:52:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:49:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_bus_error(void)
{
	char	*str;

	str = "32Tokyo";
	str[0] = '4';
	return (true);
}

int	signal_bus_error_test(void)
{
	g_failed_testcase = "char	*str;\
\n\
str = \"32Tokyo\";\
str[0] = '4';";
	if (do_bus_error())
		return (0);
	else
		return (-1);
}
