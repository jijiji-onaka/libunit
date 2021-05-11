/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 20:02:27 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*ans = "";
	char		*ft;

	ft = ft_substr("4242Toyko", -1, -1);
	if (strcmp(ft, ans) == 0)
	{
		free(ft);
		return (true);
	}
	free(ft);
	return (false);
}

int	substr_basic3_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
