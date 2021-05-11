/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:38:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	empty_test()
{
	const char	*str = "";
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

int	strdup_empty_test(void)
{
	if (empty_test())
		return (0);
	else
		return (-1);
}
