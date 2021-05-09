/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segfault_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:52:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 14:03:22 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../signal_test.h"

static bool	do_bus_error()
{
	char *str;

	str = "32Tokyo";
	str[0] = '4';
	return (true);
}

int	signal_bus_error_test(void)
{
	if (do_bus_error())
		return (0);
	else
		return (-1);
}
