/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_intmin_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:20:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	itoa_intmin_test(void)
{
	char	*str;
	bool	ret;

	g_failed_testcase = "char	*str;\
bool	ret;\
\n\
str = ft_itoa(-2147483648);\
ret = strcmp(str, \"-2147483648\");\
free(str);\
if (ret == 0)\
	return (0);\
else\
	return (-1);";
	str = ft_itoa(-2147483648);
	ret = strcmp(str, "-2147483648");
	free(str);
	if (ret == 0)
		return (0);
	else
		return (-1);
}
