/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_crash_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:31:50 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 04:57:14 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_crash(void)
{
	asm("int3");
	return (true);
}

int	signal_crash_test(void)
{
	if (do_crash())
		return (0);
	else
		return (-1);
}
