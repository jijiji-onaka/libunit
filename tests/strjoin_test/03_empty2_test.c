/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:51:05 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "const char	*ans = \"42Tokyo\";\
char	*ft;\
\n\
ft = ft_strjoin(\"42Tokyo\", \"\");\
if (strcmp(ft, ans) == 0)\
{\
	free(ft);\
	return (true);\
}\
else\
{\
	free(ft);\
	return (false);\
}";
}

static bool	empty_test(void)
{
	const char	*ans = "42Tokyo";
	char		*ft;

	set_testcase();
	ft = ft_strjoin("42Tokyo", "");
	if (strcmp(ft, ans) == 0)
	{
		free(ft);
		return (true);
	}
	else
	{
		free(ft);
		return (false);
	}
}

int	strjoin_empty2_test(void)
{
	if (empty_test())
		return (0);
	else
		return (-1);
}
