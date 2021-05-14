/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:10:17 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:55:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalnum_basic1_test(void)
{
	g_failed_testcase = "if (ft_isalnum(42) == isalnum(42))\
	return (0);\
else\
	return (-1);";
	if (ft_isalnum(42) == isalnum(42))
		return (0);
	else
		return (-1);
}
