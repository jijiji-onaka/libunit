/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:31:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strncmp_basic3_test(void)
{
	g_failed_testcase = "if (strncmp(\"hello\", \"hello\", 10) == \
ft_strncmp(\"hello\", \"hello\", 10))\
	return (0);\
else\
	return (-1);";
	if (strncmp("hello", "hello", 10) == ft_strncmp("hello", "hello", 10))
		return (0);
	else
		return (-1);
}
