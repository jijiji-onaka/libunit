/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_basic4_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 04:35:49 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:39:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	toupper_basic4_test(void)
{
	g_failed_testcase = "if (toupper(4) != ft_toupper(4))\
	return (0);\
else\
	return (-1);";
	if (toupper(4) != ft_toupper(4))
		return (0);
	else
		return (-1);
}
