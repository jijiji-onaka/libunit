/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:54:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 11:19:58 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_null_test(void)
{
	char	s1[10];
	char	s2[10];

	ft_memccpy(s1, NULL, 'a', 10);
	memccpy(s2, NULL, 'a', 10);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}
