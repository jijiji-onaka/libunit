/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_intmin_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:46:40 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:53:22 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	atoi_intmin_test(void)
{
	g_failed_testcase = "if (ft_atoi(\"-2147483648\") == atoi(\"-2147483648\"))\
	return (0);\
else\
	return (-1);";
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		return (0);
	else
		return (-1);
}
