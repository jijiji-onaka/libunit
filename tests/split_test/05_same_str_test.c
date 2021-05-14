/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_same_str_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:54:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:40:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char		**split;\
const char	*ans[] = {NULL};\
int			i;\
bool		res;\
\n\
split = ft_split(\"777777\", '7');\
i = 0;\
while (split[i] && ans[i])\
{\
	if (strcmp(split[i], ans[i]) != 0)\
		return (false);\
	free(split[i]);\
	i++;\
}\
if (split[i] == NULL && ans[i] == NULL)\
	res = true;\
else\
	res = false;\
free(split);\
return (res);";
}

static bool	same_test(void)
{
	char		**split;
	const char	*ans[] = {NULL};
	int			i;
	bool		res;

	set_testcase();
	split = ft_split("777777", '7');
	i = 0;
	while (split[i] && ans[i])
	{
		if (strcmp(split[i], ans[i]) != 0)
			return (false);
		free(split[i]);
		i++;
	}
	if (split[i] == NULL && ans[i] == NULL)
		res = true;
	else
		res = false;
	free(split);
	return (res);
}

int	split_same_str_test(void)
{
	if (same_test() == true)
		return (0);
	else
		return (-1);
}
