/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:25:20 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	*s1;\
char	*s2;\
int		ans;\
\n\
s1 = malloc(sizeof(char) * 1);\
s2 = malloc(sizeof(char) * 1);\
ft_memset(s1, '0', 1);\
memset(s2, '0', 1);\
if (!strcmp(s1, s2))\
	ans = 0;\
else\
	ans = -1;\
free(s1);\
free(s2);\
return (ans);";
}

int	memset_basic2_test(void)
{
	char	*s1;
	char	*s2;
	int		ans;

	set_testcase();
	s1 = malloc(sizeof(char) * 1);
	s2 = malloc(sizeof(char) * 1);
	ft_memset(s1, '0', 1);
	memset(s2, '0', 1);
	if (!strcmp(s1, s2))
		ans = 0;
	else
		ans = -1;
	free(s1);
	free(s2);
	return (ans);
}
