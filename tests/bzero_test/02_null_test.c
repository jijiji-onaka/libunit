/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:24:24 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 08:26:03 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_null_test(void)
{
	char s1[SIZE], s2[SIZE];

	memset(s1, 'a', SIZE);
	memset(s2, 'a', SIZE);

	ft_bzero(NULL, 50);
	bzero(NULL, 50);
	if (!memcmp(s1, s2, SIZE))
		return (0);
	else
		return (-1);
}
