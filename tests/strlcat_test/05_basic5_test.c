/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_basic5_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 17:08:01 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test()
{
	char	dst1[100] = "Hello ";
	char	dst2[100] = "Hello ";
	char	src[10] = "42Tokyo";
	size_t	res1;
	size_t	res2;

	res1 = ft_strlcat(dst1, src, 100);
	res2 = strlcat(dst2, src, 100);
	if (strcmp(dst1, dst2) == 0 && res1 == res2)
		return (true);
	else
		return (false);
}

int	strlcat_basic5_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
