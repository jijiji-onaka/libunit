/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:54:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:09:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test()
{
	char		**split;

	split = ft_split(NULL, '7');
	if (split == NULL)
		return (true);
	return (false);
}

int	split_null_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
