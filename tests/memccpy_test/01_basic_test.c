/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 23:17:19 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_basic_test(void)
{
	char	*s;
	char	s1[10];
	char	s2[10];

	s = "hello";
	ft_memccpy(s1, s, '2', 10);
	memccpy(s2, s, '2', 10);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}
