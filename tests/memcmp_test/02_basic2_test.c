/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 11:18:52 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcmp_basic2_test(void)
{
	char	*s1;
	char	*s2;
	int		ans1;
	int		ans2;

	s1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	s2 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	ans1 = ft_memcmp(s1, s2, 20);
	ans2 = memcmp(s1, s2, 20);
	if (ans1 == ans2)
		return (0);
	else
		return (-1);
}
