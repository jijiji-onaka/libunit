/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:31:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strncmp_basic1_test(void)
{
	g_failed_testcase = "if (strncmp(\"hello\", \"hello\", 5) == \
ft_strncmp(\"hello\", \"hello\", 5))\
	return (0);\
else\
	return (-1);";
	if (strncmp("hello", "hello", 5) == ft_strncmp("hello", "hello", 5))
		return (0);
	else
		return (-1);
}
