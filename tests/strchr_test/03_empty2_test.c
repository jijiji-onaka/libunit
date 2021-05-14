/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:40:29 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strchr_empty2_test(void)
{
	const char	*str = "42Tokyo";
	const char	chr = '\0';

	g_failed_testcase = "const char	*str = \"42Tokyo\";\
const char	 chr= '\\0';\
\n\
if (strchr(str, chr) == ft_strchr(str, chr))\
	return (0);\
else\
	return (-1);";
	if (strchr(str, chr) == ft_strchr(str, chr))
		return (0);
	else
		return (-1);
}
