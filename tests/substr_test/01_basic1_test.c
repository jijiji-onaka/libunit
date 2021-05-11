/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 19:59:03 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*ans = "42Toyko";
	char		*ft;

	ft = ft_substr("Roppongi42Toyko", 8, 7);
	if (strcmp(ft, ans) == 0)
	{
		free(ft);
		return (true);
	}
	free(ft);
	return (false);
}

int	substr_basic1_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
