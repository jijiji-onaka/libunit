/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_basic12_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 04:35:49 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:41:22 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	toupper_basic12_test(void)
{
	g_failed_testcase = "if (toupper(INT_MAX) != ft_toupper(INT_MAX))\
	return (0);\
else\
	return (-1);";
	if (toupper(INT_MAX) != ft_toupper(INT_MAX))
		return (0);
	else
		return (-1);
}
