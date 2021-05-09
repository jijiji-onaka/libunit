/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_minus_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:32:29 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 08:38:10 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_minus_test(void)
{
	char s1[SIZE], s2[SIZE];

	memset(s1, 'a', SIZE);
	memset(s2, 'a', SIZE);

	ft_bzero(s1, -1);
	bzero(s2, -1);

	if (!memcmp(s1, s2, SIZE))
		return (0);
	else
		return (-1);
}
