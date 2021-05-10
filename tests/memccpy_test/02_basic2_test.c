/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 23:13:17 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_basic2_test(void)
{
	char	*s;
	char	s1[10];
	char	s2[10];

	s = "42tokyo";
	ft_memccpy(s1, s, 'a', 10);
	memccpy(s2, s, 'a', 10);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}