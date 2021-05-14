/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic4_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:26:01 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strncmp_basic4_test(void)
{
	g_failed_testcase = "if (strncmp(\"he\xffllo\", \"\xff\", 5) == \
ft_strncmp(\"he\xffllo\", \"\xff\", 5))\
	return (0);\
else\
	return (-1);";
	if (strncmp("he\xffllo", "\xff", 5) == ft_strncmp("he\xffllo", "\xff", 5))
		return (0);
	else
		return (0);
}
