/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_match_head_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:57:40 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strrchr_match_head_test(void)
{
	const char	*str = "766668";
	const char	chr = '7';

	g_failed_testcase = "const char	*str = \"766668\";\
const char	 chr= '7';\
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
