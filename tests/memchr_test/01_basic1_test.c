/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:35:30 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:54:39 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memchr_basic1_test(void)
{
	char	*s;
	void	*p1;
	void	*p2;

	g_failed_testcase = "char	*s;\
void	*p1;\
void	*p2;\
\n\
s = \"42tokyo\";\
p1 = ft_memchr(s,'t', sizeof(s));\
p2 = memchr(s, 't', sizeof(s));\
if (p1 == p2)\
	return (0);\
else\
	return (-1);";
	s = "42tokyo";
	p1 = ft_memchr(s, 't', sizeof(s));
	p2 = memchr(s, 't', sizeof(s));
	if (p1 == p2)
		return (0);
	else
		return (-1);
}
