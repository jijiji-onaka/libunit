/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segfault_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:52:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 14:55:32 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_segfault()
{
	char	*ptr;

	ptr = NULL;
	*ptr = '7';
	return (true);
}

int	signal_segfault_test(void)
{
	if (do_segfault())
		return (0);
	else
		return (-1);
}
