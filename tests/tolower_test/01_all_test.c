/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_all_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:36:37 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	all_test(void)
{
	int	i;

	i = 0;
	g_failed_testcase = "int	i;\
\n\
i = 0;\
while (i < UCHAR_MAX)\
{\
	if (tolower(i) != ft_tolower(i))\
		return (false);\
	i++;\
}\
return (true);";
	while (i < UCHAR_MAX)
	{
		if (tolower(i) != ft_tolower(i))
			return (false);
		i++;
	}
	return (true);
}

int	tolower_all_test(void)
{
	if (all_test() == true)
		return (0);
	else
		return (-1);
}
