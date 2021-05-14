/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 04:35:49 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:37:50 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	toupper_basic2_test(void)
{
	g_failed_testcase = "if (toupper(2) != ft_toupper(2))\
	return (0);\
else\
	return (-1);";
	if (toupper(2) != ft_toupper(2))
		return (0);
	else
		return (-1);
}
