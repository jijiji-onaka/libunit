/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_ill_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 08:39:38 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/13 22:00:03 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_ill(void)
{
	raise(1);
	return (true);
}

int	signal_ill_test(void)
{
	if (do_ill())
		return (0);
	else
		return (-1);
}
