/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:32:21 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "const char	*big = \"Foo Bar Baz\";\
const char	*small = \"Bar\";\
char		*ft;\
char		*libc;\
\n\
ft = ft_strnstr(big, small, 6);\
libc = strnstr(big, small, 6);\
if (ft == libc)\
	return (true);\
return (false);";
}

static bool	basic_test(void)
{
	const char	*big = "Foo Bar Baz";
	const char	*small = "Bar";
	char		*ft;
	char		*libc;

	set_testcase();
	ft = ft_strnstr(big, small, 6);
	libc = strnstr(big, small, 6);
	if (ft == libc)
		return (true);
	return (false);
}

int	strnstr_basic1_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
