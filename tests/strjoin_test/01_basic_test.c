/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:50:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "const char	*ans = \"42Tokyo\";\
char	*ft;\
\n\
ft = ft_strjoin(\"42\", \"Tokyo\");\
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

static bool	basic_test(void)
{
	const char	*ans = "42Tokyo";
	char		*ft;

	set_testcase();
	ft = ft_strjoin("42", "Tokyo");
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

int	strjoin_basic_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
