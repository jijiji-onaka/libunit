/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:25:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memset_null2_test(void)
{
	g_failed_testcase = "if (ft_memset(NULL, 0, 0) == memset(NULL, 0, 0))\
	return (0);\
else\
	return (-1);";
	if (ft_memset(NULL, 0, 0) == memset(NULL, 0, 0))
		return (0);
	else
		return (-1);
}
