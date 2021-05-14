/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:22:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	*s1;\
char	*s2;\
int		ans1;\
int		ans2;\
\n\
s1 = \"abcdefghij\";\
s2 = \"1234567890\";\
ans1 = ft_memcmp(s1, s2, 10);\
ans2 = memcmp(s1, s2, 10);\
if (ans1 == ans2)\
	return (0);\
else\
	return (-1);";
}

int	memcmp_basic3_test(void)
{
	char	*s1;
	char	*s2;
	int		ans1;
	int		ans2;

	set_testcase();
	s1 = "abcdefghij";
	s2 = "1234567890";
	ans1 = ft_memcmp(s1, s2, 10);
	ans2 = memcmp(s1, s2, 10);
	if (ans1 == ans2)
		return (0);
	else
		return (-1);
}
