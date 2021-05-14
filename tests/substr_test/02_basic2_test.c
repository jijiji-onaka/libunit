/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:36:17 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "const char	*ans = \"42Toyko\";\
char		*ft1;\
char		*ft2;\
char		*ft3;\
bool		ret;\
\n\
ft1 = ft_substr(\"Roppongi42Toyko\", 8, -1);\
ft2 = ft_substr(\"Roppongi42Toyko\", 8, -1);\
ft3 = ft_substr(\"Roppongi42Toyko\", 8, -1);\
free(ft2);\
free(ft3);\
ret = strcmp(ft1, ans) == 0;\
free(ft1);\
if (strcmp(ft1, ans) == 0)\
	return (true);\
return (false);";
}

static bool	basic_test(void)
{
	const char	*ans = "42Toyko";
	char		*ft1;
	char		*ft2;
	char		*ft3;
	bool		ret;

	set_testcase();
	ft1 = ft_substr("Roppongi42Toyko", 8, -1);
	ft2 = ft_substr("Roppongi42Toyko", 8, -1);
	ft3 = ft_substr("Roppongi42Toyko", 8, -1);
	free(ft2);
	free(ft3);
	ret = strcmp(ft1, ans) == 0;
	free(ft1);
	if (strcmp(ft1, ans) == 0)
		return (true);
	return (false);
}

int	substr_basic2_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
