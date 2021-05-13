/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/13 22:02:28 by tjinichi         ###   ########.fr       */
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

static bool	basic_test(void)
{
	const char	*ans = "42tokyo";
	char		*src;
	char		*res;

	src = "42TOKYO";
	res = ft_strmapi(src, tolower_tmp);
	if (strcmp(ans, res) == 0)
	{
		free(res);
		return (true);
	}
	else
	{
		free(res);
		return (false);
	}
}

int	strmapi_basic_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
