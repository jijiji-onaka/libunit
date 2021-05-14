/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:56:26 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memchr_basic3_test(void)
{
	char	*s;
	void	*p1;
	void	*p2;

	g_failed_testcase = "char	*s;\
void	*p1;\
void	*p2;\
\n\
s = \"42tokyo\";\
p1 = ft_memchr(s,'k', 3);\
p2 = memchr(s, 'k', 3);\
if (p1 == p2)\
	return (0);\
else\
	return (-1);";
	s = "42tokyo";
	p1 = ft_memchr(s, 'k', 3);
	p2 = memchr(s, 'k', 3);
	if (p1 == p2)
		return (0);
	else
		return (-1);
}
