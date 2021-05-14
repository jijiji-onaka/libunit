/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_match_tail_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:54:58 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strrchr_match_tail_test(void)
{
	const char	*str = "766668";
	const char	chr = '8';

	g_failed_testcase = "const char	*str = \"766668\";\
const char	 chr= '8';\
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
