/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_crash_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:43:51 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 08:55:03 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_crash()
{
	int	i;

	i = 0;
	if (1 / i)
		return (true);
	else
		return (false);

}

int	signal_crash_test(void)
{
	if (do_crash())
		return (0);
	else
		return (-1);
}
