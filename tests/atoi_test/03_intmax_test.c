/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_intmax_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:45:43 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:53:19 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	atoi_intmax_test(void)
{
	g_failed_testcase = "if (ft_atoi(\"2147483647\") == atoi(\"2147483647\"))\
	return (0);\
else\
	return (-1);";
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (0);
	else
		return (-1);
}
