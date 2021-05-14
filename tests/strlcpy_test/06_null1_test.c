/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:52:48 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	src[10] = \"42Tokyo\";\
size_t	res1;\
size_t	res2;\
\n\
res1 = ft_strlcpy(NULL, src, 0);\
res2 = strlcpy(NULL, src, 0);\
if (res1 == res2)\
	return (true);\
else\
	return (false);";
}

static bool	null_test(void)
{
	const char	src[10] = "42Tokyo";
	size_t		res1;
	size_t		res2;

	set_testcase();
	res1 = ft_strlcpy(NULL, src, 0);
	res2 = strlcpy(NULL, src, 0);
	if (res1 == res2)
		return (true);
	else
		return (false);
}

int	strlcpy_null1_test(void)
{
	if (null_test())
		return (0);
	else
		return (-1);
}
