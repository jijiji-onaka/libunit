/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:38:18 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "const char	*str = \"\";\
char	*ft;\
char	*libc;\
\n\
ft = ft_strdup(str);\
libc = strdup(str);\
if (strcmp(ft, libc) == 0 && ft != libc)\
{\
	free(ft);\
	free(libc);\
	return (true);\
}\
else\
{\
	free(ft);\
	free(libc);\
	return (false);\
}";
}

static bool	empty_test(void)
{
	const char	*str = "";
	char		*ft;
	char		*libc;

	set_testcase();
	ft = ft_strdup(str);
	libc = strdup(str);
	if (strcmp(ft, libc) == 0 && ft != libc)
	{
		free(ft);
		free(libc);
		return (true);
	}
	else
	{
		free(ft);
		free(libc);
		return (false);
	}
}

int	strdup_empty_test(void)
{
	if (empty_test())
		return (0);
	else
		return (-1);
}
