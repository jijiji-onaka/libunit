/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:22:11 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memchr_null2_test(void)
{
	char	s1[10];
	char	s2[10];

	g_failed_testcase = "char	s1[10];\
char	s2[10];\
\n\
if (ft_memchr(NULL, 'a', 0) == memchr(NULL, 'a', 0))\
	return (0);\
else\
	return (-1);";
	if (ft_memchr(NULL, 'a', 0) == memchr(NULL, 'a', 0))
		return (0);
	else
		return (-1);
}
