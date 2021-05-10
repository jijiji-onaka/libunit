/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_all_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:53:56 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 10:54:22 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalpha_all_test(void)
{
	int	i;

	i = 0;
	while (i < UCHAR_MAX)
	{
		if (ft_isalpha(i) != isalpha(i))
			return (-1);
		i++;
	}
	return (0);
}
