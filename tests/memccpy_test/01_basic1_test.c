/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 03:56:44 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:56:48 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_basic1_test(void)
{
	char	*s;
	char	s1[10];
	char	s2[10];

	g_failed_testcase = "char	*s;\
char	s1[10];\
char	s2[10];\
\n\
s = \"hello\";\
ft_memccpy(s1, s, '2', 10);\
memccpy(s2, s, '2', 10);\
if (!strcmp(s1, s2))\
	return (0);\
else\
	return (-1);";
	s = "hello";
	ft_memccpy(s1, s, '2', 10);
	memccpy(s2, s, '2', 10);
	if (!strcmp(s1, s2))
		return (0);
	else
		return (-1);
}
