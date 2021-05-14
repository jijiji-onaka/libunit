/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:31:12 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static char	tolower_tmp(unsigned int n, char c)
{
	(void)n;
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

static bool	null_test(void)
{
	char		*res;

	g_failed_testcase = "char		*res;\
\n\
res = ft_strmapi(NULL, tolower_tmp);\
if (res == NULL)\
	return (true);\
else\
	return (false);";
	res = ft_strmapi(NULL, tolower_tmp);
	if (res == NULL)
		return (true);
	else
		return (false);
}

int	strmapi_null1_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
