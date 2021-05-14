/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:53:21 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:02:46 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	isprint_basic2_test(void)
{
	g_failed_testcase = "if (ft_isprint(4200) == isprint(4200))\
	return (0);\
else\
	return (-1);";
	if (ft_isprint(4200) == isprint(4200))
		return (0);
	else
		return (-1);
}
