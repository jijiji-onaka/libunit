/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 20:50:16 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_basic2_test(void)
{
	char	str[] = "42tokyo";
	char	s1[10];
	char	s2[10];

	ft_memccpy(s1, str, 'a', 3);
	memccpy(s2, str, 'a', 3);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}
