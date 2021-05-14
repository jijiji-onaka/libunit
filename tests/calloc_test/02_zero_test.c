/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:10:01 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:14:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	*s1;\
char	*s2;\
int		result;\
\n\
s1 = ft_calloc(0, 0);\
s2 = calloc(0, 0);\
result = 0;\
if (!memcmp(s1, s2, 100))\
	result = 0;\
else\
	result = -1;\
free(s1);\
free(s2);\
return (result);";
}

int	calloc_zero_test(void)
{
	char	*s1;
	char	*s2;
	int		result;

	set_testcase();
	s1 = ft_calloc(0, 0);
	s2 = calloc(0, 0);
	result = 0;
	if (!memcmp(s1, s2, SIZE))
		result = 0;
	else
		result = -1;
	free(s1);
	free(s2);
	return (result);
}
