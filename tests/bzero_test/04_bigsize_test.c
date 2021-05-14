/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bigsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:28:56 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:57:28 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_bigsize_test(void)
{
	char	s1[BIG];
	char	s2[BIG];

	g_failed_testcase = "char s1[100000], s2[100000];\
\
memset(s1, 'a', 100000);\
memset(s2, 'a', 100000);\
\
ft_bzero(s1, 50);\
bzero(s2, 50);\
if (!memcmp(s1, s2, 100000))\
	return (0);\
else\
	return (-1);";
	memset(s1, 'a', BIG);
	memset(s2, 'a', BIG);
	ft_bzero(s1, BIG);
	bzero(s2, BIG);
	if (!memcmp(s1, s2, BIG))
		return (0);
	else
		return (-1);
}
