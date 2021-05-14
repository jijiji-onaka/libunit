/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:14:10 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:57:17 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_basic_test(void)
{
	char	s1[SIZE];
	char	s2[SIZE];

	g_failed_testcase = "char s1[100], s2[100];\
\
memset(s1, 'a', 100);\
memset(s2, 'a', 100);\
\
ft_bzero(s1, 50);\
bzero(s2, 50);\
if (!memcmp(s1, s2, 100))\
	return (0);\
else\
	return (-1);";
	memset(s1, 'a', SIZE);
	memset(s2, 'a', SIZE);
	ft_bzero(s1, 50);
	bzero(s2, 50);
	if (!memcmp(s1, s2, SIZE))
		return (0);
	else
		return (-1);
}
