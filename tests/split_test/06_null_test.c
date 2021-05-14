/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:54:41 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:39:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char		**split;\
\n\
split = ft_split(NULL, '7');\
if (split == NULL)\
	return (true);\
return (false);";
}

static bool	null_test(void)
{
	char		**split;

	set_testcase();
	split = ft_split(NULL, '7');
	if (split == NULL)
		return (true);
	return (false);
}

int	split_null_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
