/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:53:10 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*ans = "42Tokyo";
	char		*ft;
	bool		ret;

	g_failed_testcase = "const char	*ans = \"42Tokyo\";\
char		*ft;\
bool		ret;\
\n\
ft = ft_strtrim(\"42Tokyo\", \"abc\");\
ret = strcmp(ans, ft) == 0;\
free(ft);\
if (ret)\
	return (true);\
return (false);";
	ft = ft_strtrim("42Tokyo", "abc");
	ret = strcmp(ans, ft) == 0;
	free(ft);
	if (ret)
		return (true);
	return (false);
}

int	strtrim_basic3_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
