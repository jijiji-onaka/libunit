/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:32 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 00:25:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isdigit_basic1_test(void)
{
	g_failed_testcase = "if (ft_isdigit(42) == isdigit(42))\
	return (0);\
else\
	return (-1);";
	if (ft_isdigit(42) == isdigit(42))
		return (0);
	else
		return (-1);
}
