/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:17:58 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:12:23 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	bigsize_test(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = ft_calloc(BIG, 1);
	s2 = calloc(BIG, 1);
	result = memcmp(s1, s2, BIG);
	free(s1);
	free(s2);
	if (result == 0)
		return (true);
	else
		return (false);
}

int	calloc_bigsize_test(void)
{
	g_failed_testcase = "char	*s1;\
char	*s2;\
int		result;\
\n\
s1 = ft_calloc(100000, 1);\
s2 = calloc(100000, 1);\
result = 0;\
if (!memcmp(s1, s2, 100000))\
	result = 0;\
else\
	result = -1;\
free(s1);\
free(s2);\
return (result);";
	if (bigsize_test() == true)
		return (0);
	else
		return (-1);
}
