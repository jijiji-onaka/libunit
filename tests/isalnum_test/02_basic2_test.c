/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:13:51 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:51:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isalnum_basic2_test(void)
{
	g_failed_testcase = "if (ft_isalnum(4200) == isalnum(4200))\
	return (0);\
else\
	return (-1);";
	if (ft_isalnum(4200) == isalnum(4200))
		return (0);
	else
		return (-1);
}
