/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:25:11 by tjinichi         ###   ########.fr       */
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
ft_memset(s1, 'a', 100);\
memset(s2, 'a', 100);\
if (!strcmp(s1, s2))\
	ans = 0;\
else\
	ans = -1;\
free(s1);\
free(s2);\
return (ans);";
}

int	memset_basic1_test(void)
{
	char	*s1;
	char	*s2;
	int		ans;

	set_testcase();
	s1 = malloc(sizeof(char) * SIZE);
	s2 = malloc(sizeof(char) * SIZE);
	ft_memset(s1, 'a', SIZE);
	memset(s2, 'a', SIZE);
	if (!strcmp(s1, s2))
		ans = 0;
	else
		ans = -1;
	free(s1);
	free(s2);
	return (ans);
}
