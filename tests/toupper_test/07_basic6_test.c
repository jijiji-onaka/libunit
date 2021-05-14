/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_basic6_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 04:35:49 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:40:08 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	toupper_basic6_test(void)
{
	g_failed_testcase = "if (toupper(7) != ft_toupper(7))\
	return (0);\
else\
	return (-1);";
	if (toupper(7) != ft_toupper(7))
		return (0);
	else
		return (-1);
}
