/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:54:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strrchr_empty3_test(void)
{
	const char	*str = "";
	const char	chr = '\0';

	g_failed_testcase = "const char	*str = \"\";\
const char	 chr= '\0';\
\n\
if (strrchr(str, chr) == ft_strrchr(str, chr))\
	return (0);\
else\
	return (-1);";
	if (strrchr(str, chr) == ft_strrchr(str, chr))
		return (0);
	else
		return (-1);
}
