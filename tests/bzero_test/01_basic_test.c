/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:14:10 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 08:23:58 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_basic_test(void)
{
	char s1[SIZE], s2[SIZE];

	memset(s1, 'a', SIZE);
	memset(s2, 'a', SIZE);

	ft_bzero(s1, 50);
	bzero(s2, 50);
	if (!memcmp(s1, s2, SIZE))
		return (0);
	else
		return (-1);
}
