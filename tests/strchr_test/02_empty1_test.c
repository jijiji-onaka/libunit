/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:40:36 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strchr_empty1_test(void)
{
	const char	*str = "";
	const char	chr = 'T';

	g_failed_testcase = "const char	*str = \"\";\
const char	 chr= 'T';\
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
