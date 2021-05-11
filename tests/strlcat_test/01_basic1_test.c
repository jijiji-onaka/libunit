/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 18:20:09 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	char	dst1[20] = "Hello ";
	char	dst2[20] = "Hello ";
	char	src[10] = "42Tokyo";
	size_t	res1;
	size_t	res2;

	res1 = ft_strlcat(dst1, src, 15);
	res2 = strlcat(dst2, src, 15);
	if (strcmp(dst1, dst2) == 0 && res1 == res2)
		return (true);
	else
		return (false);
}

int	strlcat_basic1_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
