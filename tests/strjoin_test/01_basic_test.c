/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:47:47 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test()
{
	const char	*ans = "42Tokyo";
	char	*ft;

	ft = ft_strjoin("42", "Tokyo");
	if (strcmp(ft, ans) == 0)
	{
		free(ft);
		return (true);
	}
	else
	{
		free(ft);
		return (false);
	}
}

int	strjoin_basic_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
