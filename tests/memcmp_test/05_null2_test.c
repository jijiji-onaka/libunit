/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 04:01:07 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcmp_null2_test(void)
{
	char	s1[10];

	g_failed_testcase = "char	*s1;\
\n\
s1 = \"hello\";\
if (ft_memcmp(s, NULL, 0) == memcmp(s, NULL, 0))\
	return (0);\
else\
	return (-1);";
	if (ft_memcmp(s1, NULL, 0) == memcmp(s1, NULL, 0))
		return (0);
	else
		return (-1);
}
