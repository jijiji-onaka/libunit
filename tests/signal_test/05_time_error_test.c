/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_time_error_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:02:43 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/13 08:41:40 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_time_error()
{
	while (1)
		;
	return (true);
}

int	signal_time_error_test(void)
{
	if (do_time_error())
		return (0);
	else
		return (-1);
}
