/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:20:05 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	itoa_basic_test(void)
{
	char	*str;
	bool	ret;

	g_failed_testcase = "char	*str;\
\n\
str = ft_itoa(42);\
if (!strcmp(str, \"42\"))\
{\
	free(str);\
	return (0);\
}\
else\
{\
	free(str);\
	return (-1);\
}";
	str = ft_itoa(42);
	ret = strcmp(str, "42");
	free(str);
	if (ret == 0)
		return (0);
	else
		return (-1);
}
