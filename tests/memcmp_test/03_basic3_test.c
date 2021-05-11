/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 11:19:01 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcmp_basic3_test(void)
{
	char	*s1;
	char	*s2;
	int		ans1;
	int		ans2;

	s1 = "abcdefghij";
	s2 = "1234567890";
	ans1 = ft_memcmp(s1, s2, 10);
	ans2 = memcmp(s1, s2, 10);
	if (ans1 == ans2)
		return (0);
	else
		return (-1);
}
