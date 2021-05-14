/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:24:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	*s1;\
char	*s2;\
int		ans;\
\n\
s1 = malloc(sizeof(char) * 100);\
s2 = malloc(sizeof(char) * 100);\
memset(s1, '1', 100);\
memset(s2, '1', 100);\
ft_memmove(s1, \"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\", 10);\
memmove(s2, \"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\", 10);\
if (!strcmp(s1, s2))\
	ans = 0;\
else\
	ans = -1;\
free(s1);\
free(s2);\
return (ans);";
}

int	memmove_basic2_test(void)
{
	char	*s1;
	char	*s2;
	int		ans;

	set_testcase();
	s1 = malloc(sizeof(char) * SIZE);
	s2 = malloc(sizeof(char) * SIZE);
	memset(s1, '1', SIZE);
	memset(s2, '1', SIZE);
	ft_memmove(s1, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 10);
	memmove(s2, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 10);
	if (!strcmp(s1, s2))
		ans = 0;
	else
		ans = -1;
	free(s1);
	free(s2);
	return (ans);
}
