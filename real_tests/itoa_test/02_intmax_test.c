/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_intmax_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:20:15 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	itoa_intmax_test(void)
{
	char	*str;
	bool	ret;

	g_failed_testcase = "char	*str;\
bool	ret;\
\n\
str = ft_itoa(2147483647);\
ret = strcmp(str, \"2147483647\");\
free(str);\
if (ret == 0)\
	return (0);\
else\
	return (-1);";
	str = ft_itoa(2147483647);
	ret = strcmp(str, "2147483647");
	free(str);
	if (ret == 0)
		return (0);
	else
		return (-1);
}
