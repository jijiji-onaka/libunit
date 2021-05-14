/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_fpe_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:43:51 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 09:36:44 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_fpe(void)
{
	int	i;

	i = 0;
	if (1 / i)
		return (true);
	else
		return (false);
}

int	signal_fpe_test(void)
{
	if (do_fpe())
		return (0);
	else
		return (-1);
}
