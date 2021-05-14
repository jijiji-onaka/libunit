/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:21:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_basic3_test(void)
{
	char	*s;
	char	s1[10];
	char	s2[10];

	g_failed_testcase = "char	*s;\
char	s1[10];\
char	s2[10];\
\n\
s = \"42tokyo\";\
ft_memccpy(s1, s, 'a', 1);\
memccpy(s2, s, 'a', 1);\
if (!strcmp(s1, s2))\
	return (0);\
else\
	return (-1);";
	s = "42tokyo";
	ft_memccpy(s1, s, 'a', 1);
	memccpy(s2, s, 'a', 1);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}
