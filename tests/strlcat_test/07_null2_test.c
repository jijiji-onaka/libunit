/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 17:24:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test()
{
	char	src[10] = "42Tokyo";
	size_t	res1;
	size_t	res2;

	res1 = ft_strlcat(NULL, src, 1);
	res2 = strlcat(NULL, src, 1);
	if (res1 == res2)
		return (true);
	else
		return (false);
}

int	strlcat_null2_test(void)
{
	if (null_test())
		return (0);
	else
		return (-1);
}
