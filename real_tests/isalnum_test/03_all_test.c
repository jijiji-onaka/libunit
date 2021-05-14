/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_all_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:14:26 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 10:42:46 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalnum_all_test(void)
{
	int	i;

	g_failed_testcase = "int	i;\
\n\
i = 0;\
while (i < UCHAR_MAX)\
{\
	if (ft_isalnum(i) != isalnum(i))\
		return (-1);\
	i++;\
}\
return (0);";
	i = 0;
	while (i < UCHAR_MAX)
	{
		if (ft_isalnum(i) != isalnum(i))
			return (-1);
		i++;
	}
	return (0);
}
