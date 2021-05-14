/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 01:23:12 by tjinichi         ###   ########.fr       */
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
memset(s1, 'a', 100 - 1);\
memset(s2, 'a', 100 - 1);\
ft_memcpy(s1, \"hello\", 5);\
memcpy(s2, \"hello\", 5);\
if (!strcmp(s1, s2))\
	ans = 0;\
else\
	ans = -1;\
free(s1);\
free(s2);\
return (ans);";
}

int	memcpy_basic1_test(void)
{
	char	*s1;
	char	*s2;
	int		ans;

	set_testcase();
	s1 = malloc(sizeof(char) * SIZE);
	s2 = malloc(sizeof(char) * SIZE);
	memset(s1, 'a', SIZE - 1);
	memset(s2, 'a', SIZE - 1);
	ft_memcpy(s1, "hello", 5);
	memcpy(s2, "hello", 5);
	if (!strcmp(s1, s2))
		ans = 0;
	else
		ans = -1;
	free(s1);
	free(s2);
	return (ans);
}
