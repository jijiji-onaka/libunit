/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long_string_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:39:23 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 04:10:56 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	*str;\
char	*ft;\
char	*libc;\
int		i;\
bool	ret;\
\n\
str = malloc((size_t)INT_MAX + 1);\
if (str == NULL)\
	exit_fatal(__LINE__, __FILE__);\
i = -1;\
while (++i < INT_MAX)\
	str[i] = '7';\
str[i] = '\0';\
ft = ft_strdup(str);\
libc = strdup(str);\
free(str);\
ret = strcmp(ft, libc) == 0 && ft != libc;\
free(ft);\
free(libc);\
if (strcmp(ft, libc) == 0 && ft != libc)\
	return (true);\
else\
	return (false);";
}

static bool	long_str_test(void)
{
	char	*str;
	char	*ft;
	char	*libc;
	int		i;
	bool	ret;

	set_testcase();
	str = malloc((size_t)INT_MAX + 1);
	if (str == NULL)
		exit_fatal(__LINE__, __FILE__);
	i = -1;
	while (++i < INT_MAX)
		str[i] = '7';
	str[i] = '\0';
	ft = ft_strdup(str);
	libc = strdup(str);
	free(str);
	ret = strcmp(ft, libc) == 0 && ft != libc;
	free(ft);
	free(libc);
	if (ret)
		return (true);
	else
		return (false);
}

int	strdup_long_str_test(void)
{
	if (long_str_test())
		return (0);
	else
		return (-1);
}
