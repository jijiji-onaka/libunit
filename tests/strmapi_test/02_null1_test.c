/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/13 22:03:02 by tjinichi         ###   ########.fr       */
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
