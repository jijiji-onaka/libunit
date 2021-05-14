/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long_string_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:59:12 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:30:55 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	*str;\
int		i;\
bool	ret;\
\n\
str = malloc((size_t)INT_MAX + 1);\
if (str == NULL)\
	exit(1);\
i = -1;\
while (++i < INT_MAX)\
	str[i] = '7';\
str[i] = '\0';\
ret = ft_strlen(str) == strlen(str);\
free(str);\
if (ret)\
	return (true);\
else\
	return (false);";
}

static bool	long_string_test(void)
{
	char	*str;
	int		i;
	bool	ret;

	set_testcase();
	str = malloc((size_t)INT_MAX + 1);
	if (str == NULL)
		exit(1);
	i = -1;
	while (++i < INT_MAX)
		str[i] = '7';
	str[i] = '\0';
	ret = ft_strlen(str) == strlen(str);
	free(str);
	if (ret)
		return (true);
	else
		return (false);
}

int	strlen_long_string_test(void)
{
	if (long_string_test())
		return (0);
	else
		return (-1);
}
