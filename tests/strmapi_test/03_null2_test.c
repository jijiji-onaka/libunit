/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:31:19 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test(void)
{
	char		*src;
	char		*res;

	g_failed_testcase = "char		*src;\
char		*res;\
\n\
src = \"42TOKYO\";\
res = ft_strmapi(src, NULL);\
if (res == NULL)\
	return (true);\
else\
	return (false);";
	src = "42TOKYO";
	res = ft_strmapi(src, NULL);
	if (res == NULL)
		return (true);
	else
		return (false);
}

int	strmapi_null2_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
