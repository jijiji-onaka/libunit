/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:37:10 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test()
{
	const char	*str = "42Tokyo";
	char	*ft;
	char	*libc;

	ft = ft_strdup(str);
	libc = strdup(str);
	if (strcmp(ft, libc) == 0 && ft != libc)
	{
		free(ft);
		free(libc);
		return (true);
	}
	else
	{
		free(ft);
		free(libc);
		return (false);
	}
}

int	strdup_basic_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
