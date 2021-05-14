/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic4_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:47:43 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "char	dst1[20] = \"Hello \";\
char	dst2[20] = \"Hello \";\
char	src[10] = \"42Tokyo\";\
size_t	res1;\
size_t	res2;\
\n\
res1 = ft_strlcat(dst1, src, 9);\
res2 = strlcat(dst2, src, 9);\
if (strcmp(dst1, dst2) == 0 && res1 == res2)\
	return (true);\
else\
	return (false);";
}

static void	set(char *dst)
{
	dst[0] = 'H';
	dst[1] = 'e';
	dst[2] = 'l';
	dst[3] = 'l';
	dst[4] = 'o';
	dst[5] = ' ';
	dst[6] = '\0';
}

static bool	basic_test(void)
{
	char		dst1[20];
	char		dst2[20];
	const char	src[10] = "42Tokyo";
	size_t		res1;
	size_t		res2;

	set_testcase();
	set(dst1);
	set(dst2);
	res1 = ft_strlcat(dst1, src, 9);
	res2 = strlcat(dst2, src, 9);
	if (strcmp(dst1, dst2) == 0 && res1 == res2)
		return (true);
	else
		return (false);
}

int	strlcat_basic4_test(void)
{
	if (basic_test())
		return (0);
	else
		return (-1);
}
