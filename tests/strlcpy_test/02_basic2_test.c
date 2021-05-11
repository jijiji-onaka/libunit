/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 17:22:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test()
{
	char	dst1[20] = "Hello ";
	char	dst2[20] = "Hello ";
	char	src[10] = "42Tokyo";
	size_t	res1;
	size_t	res2;

	res1 = ft_strlcpy(dst1, src, 3);
	res2 = strlcpy(dst2, src, 3);
	if (strcmp(dst1, dst2) == 0 && res1 == res2)
		return (true);
	else
		return (false);
}

int	strlcpy_basic2_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
