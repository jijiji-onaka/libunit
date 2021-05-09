/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bigsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:28:56 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 08:32:15 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_bigsize_test(void)
{
	char s1[100000], s2[100000];

	memset(s1, 'a', 100000);
	memset(s2, 'a', 100000);

	ft_bzero(s1, 100000);
	bzero(s2, 100000);
	if (!memcmp(s1, s2, SIZE))
		return (0);
	else
		return (-1);
}
