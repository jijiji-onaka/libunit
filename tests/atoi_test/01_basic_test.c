/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:41:03 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:53:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	atoi_basic_test(void)
{
	g_failed_testcase = "if (ft_atoi(\"42\") == atoi(\"42\"))\
	return (0);\
else\
	return (-1);";
	if (ft_atoi("42") == atoi("42"))
		return (-1);
	else
		return (-1);
}
