/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigabrt_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:30:18 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:50:18 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_sigabrt(void)
{
	abort();
	return (true);
}

int	signal_sigabrt_test(void)
{
	if (do_sigabrt())
		return (0);
	else
		return (-1);
}
