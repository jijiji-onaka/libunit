/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_basic11_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 04:35:49 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:41:07 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	toupper_basic11_test(void)
{
	g_failed_testcase = "if (toupper(INT_MIN) != ft_toupper(INT_MIN))\
	return (0);\
else\
	return (-1);";
	if (toupper(INT_MIN) != ft_toupper(INT_MIN))
		return (0);
	else
		return (-1);
}
