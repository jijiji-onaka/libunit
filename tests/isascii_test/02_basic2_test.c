/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:53:21 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:50:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isascii_basic2_test(void)
{
	g_failed_testcase = "if (ft_isascii(4200) == isascii(4200))\
	return (0);\
else\
	return (-1);";
	if (ft_isascii(4200) == isascii(4200))
		return (0);
	else
		return (-1);
}
