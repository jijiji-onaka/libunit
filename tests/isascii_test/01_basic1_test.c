/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:32 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:57:45 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isascii_basic1_test(void)
{
	g_failed_testcase = "if (ft_isascii(42) == isascii(42))\
	return (0);\
else\
	return (-1);";
	if (ft_isascii(42) == isascii(42))
		return (0);
	else
		return (-1);
}
