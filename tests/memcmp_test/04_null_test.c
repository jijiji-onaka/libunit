/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 07:49:59 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcmp_null_test(void)
{
	char	*s1;
	int		ans1;
	int		ans2;

	s1 = "hello";
	ans1 = ft_memcmp(s1, NULL, sizeof(s1));
	ans2 = memcmp(s1, NULL, sizeof(s1));
	if (ans1 == ans2)
		return (0);
	else
		return (-1);
}
