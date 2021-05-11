/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 20:01:32 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*ans = "42Toyko";
	char		*ft1;
	char		*ft2;
	char		*ft3;

	ft1 = ft_substr("Roppongi42Toyko", 8, -1);
	ft2 = ft_substr("Roppongi42Toyko", 8, -1);
	ft3 = ft_substr("Roppongi42Toyko", 8, -1);
	free(ft2);
	free(ft3);
	if (strcmp(ft1, ans) == 0)
	{
		free(ft1);
		return (true);
	}
	free(ft1);
	return (false);
}

int	substr_basic2_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
