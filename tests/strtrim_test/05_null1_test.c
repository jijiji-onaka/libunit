/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:34:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test(void)
{
	char		*ft;

	g_failed_testcase = "char		*ft;\
\n\
ft = ft_strtrim(NULL, \"abc\");\
if (ft == NULL)\
	return (true);\
return (false);";
	ft = ft_strtrim(NULL, "abc");
	if (ft == NULL)
		return (true);
	return (false);
}

int	strtrim_null1_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
