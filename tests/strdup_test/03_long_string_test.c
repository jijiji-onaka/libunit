/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long_string_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:39:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:41:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	long_str_test()
{
	char	*str;
	char	*ft;
	char	*libc;
	int		i;

	str = malloc((size_t)INT_MAX + 1);
	if (str == NULL)
		exit(1);
	i = -1;
	while (++i < INT_MAX)
		str[i] = '7';
	str[i] = '\0';
	ft = ft_strdup(str);
	libc = strdup(str);
	free(str);
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

int	strdup_long_str_test(void)
{
	if (long_str_test())
		return (0);
	else
		return (-1);
}
