/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:26:59 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 08:27:18 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_zero_test(void)
{
	char s1[SIZE], s2[SIZE];

	memset(s1, 'a', SIZE);
	memset(s2, 'a', SIZE);

	ft_bzero(s1, 0);
	bzero(s2, 0);
	if (!memcmp(s1, s2, SIZE))
		return (0);
	else
		return (-1);
}
