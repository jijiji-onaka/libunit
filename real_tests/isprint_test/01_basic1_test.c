/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:32 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:02:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isprint_basic1_test(void)
{
	g_failed_testcase = "if (ft_isprint(42) == isprint(42))\
	return (0);\
else\
	return (-1);";
	if (ft_isprint(42) == isprint(42))
		return (0);
	else
		return (-1);
}
