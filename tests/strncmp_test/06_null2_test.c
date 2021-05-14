/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null2_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:31:52 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strncmp_null2_test(void)
{
	g_failed_testcase = "if (strncmp(NULL, \"\xff\", 0) == \
ft_strncmp(NULL, \"\xff\", 0))\
	return (0);\
else\
	return (-1);";
	if (strncmp(NULL, "he\xffllo", 0) == ft_strncmp(NULL, "he\xffllo", 0))
		return (0);
	else
		return (-1);
}
