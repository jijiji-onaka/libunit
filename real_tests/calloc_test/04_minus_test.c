/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_minus_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:19:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:12:52 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	minus_test(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = ft_calloc(-42, -42);
	s2 = calloc(-42, -42);
	result = s1 == s2;
	free(s1);
	free(s2);
	if (result == true)
		return (true);
	else
		return (false);
}

int	calloc_minus_test(void)
{
	g_failed_testcase = "char	*s1;\
char	*s2;\
int		result;\
\n\
s1 = ft_calloc(-42, -42);\
s2 = calloc(-42, -42);\
result = 0;\
if (s1 == s2)\
	result = 0;\
else\
	result = -1;\
free(s1);\
free(s2);\
return (result);";
	if (minus_test() == true)
		return (0);
	else
		return (-1);
}
