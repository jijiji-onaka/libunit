/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_false_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:52:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:47:02 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	signal_false_test(void)
{
	g_failed_testcase = "if (false)\
	return (0);\
else\
	return (-1);";
	if (false)
		return (0);
	else
		return (-1);
}
