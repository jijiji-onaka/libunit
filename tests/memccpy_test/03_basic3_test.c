/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 20:50:14 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_basic3_test(void)
{
	char	str[] = "42tokyo";
	char	s1[10];
	char	s2[10];

	ft_memccpy(s1, str, 'a', 100);
	memccpy(s2, str, 'a', 100);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}
