/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:52:32 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:56:30 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalpha_basic1_test(void)
{
	g_failed_testcase = "if (ft_isalpha(42) == isalpha(42))\
	return (0);\
else\
	return (-1);";
	if (ft_isalpha(42) == isalpha(42))
		return (0);
	else
		return (-1);
}
