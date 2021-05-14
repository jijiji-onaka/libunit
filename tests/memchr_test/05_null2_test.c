/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 04:00:50 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memchr_null2_test(void)
{
	g_failed_testcase = "char	s1[10];\
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
