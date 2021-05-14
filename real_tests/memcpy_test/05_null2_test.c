/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:24:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memcpy_null2_test(void)
{
	char	*s1;

	s1 = "hello";
	g_failed_testcase = "char	*s1;\
\n\
s1 = \"hello\";\
if (ft_memcpy(s, NULL, 0) == memcpy(s, NULL, 0))\
	return (0);\
else\
	return (-1);";
	if (ft_memcpy(s1, NULL, 0) == memcpy(s1, NULL, 0))
		return (0);
	else
		return (-1);
}
