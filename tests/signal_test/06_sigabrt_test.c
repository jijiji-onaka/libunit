/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigabrt_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:30:18 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 08:39:41 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_sigabrt()
{
	abort();
}

int	signal_sigabrt_test(void)
{
	if (do_sigabrt())
		return (0);
	else
		return (-1);
}
