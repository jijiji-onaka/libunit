/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:21:16 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memccpy_null2_test(void)
{
	char	s1[10];
	char	s2[10];

	g_failed_testcase = "char	s1[10];\
char	s2[10];\
\n\
if (ft_memccpy(s1, NULL, 'a', 0) == memccpy(s2, NULL, 'a', 0))\
	return (0);\
else\
	return (-1);";
	if (ft_memccpy(s1, NULL, 'a', 0) == memccpy(s2, NULL, 'a', 0))
		return (0);
	else
		return (-1);
}
