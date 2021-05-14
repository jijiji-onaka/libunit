/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_all_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:53:56 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 00:25:09 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isascii_all_test(void)
{
	int	i;

	g_failed_testcase = "int	i;\
\n\
i = 0;\
while (i < UCHAR_MAX)\
{\
	if (ft_isascii(i) != isascii(i))\
		return (-1);\
	i++;\
}\
return (0);";
	i = 0;
	while (i < UCHAR_MAX)
	{
		if (ft_isascii(i) != isascii(i))
			return (-1);
		i++;
	}
	return (0);
}
