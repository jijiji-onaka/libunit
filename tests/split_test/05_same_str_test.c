/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_same_str_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:54:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:29:17 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	same_test()
{
	char		**split;
	const char	*ans[] = {NULL};
	int			i;
	bool		res;

	split = ft_split("777777", '7');
	i = 0;
	while (split[i] && ans[i])
	{
		if (strcmp(split[i], ans[i]) != 0)
			return (false);
		free(split[i]);
		i++;
	}
	if (split[i] == NULL && ans[i] == NULL)
		res = true;
	else
		res = false;
	free(split);
	return (res);
}

int	split_same_str_test(void)
{
	if (same_test() == true)
		return (0);
	else
		return (-1);
}
