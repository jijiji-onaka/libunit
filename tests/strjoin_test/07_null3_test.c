/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null3_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:51:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test()
{
	char	*ft;

	ft = ft_strjoin(NULL, NULL);
	if (ft == NULL)
		return (true);
	return (false);
}

int	strjoin_null3_test(void)
{
	if (null_test())
		return (0);
	else
		return (-1);
}
