/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 18:30:17 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static char	tolower_tmp(unsigned int n, char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

static bool	null_test(void)
{
	char		*src;
	char		*res;

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
