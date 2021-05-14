/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null1_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:32:51 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static void	set_testcase(void)
{
	g_failed_testcase = "const char	*small = \"z\";\
char		*ft;\
char		*libc;\
\n\
ft = ft_strnstr(NULL, small, 0);\
libc = strnstr(NULL, small, 0);\
if (ft == libc)\
	return (true);\
return (false);";
}

static bool	null_test(void)
{
	const char	*small = "z";
	char		*ft;
	char		*libc;

	set_testcase();
	ft = ft_strnstr(NULL, small, 0);
	libc = strnstr(NULL, small, 0);
	if (ft == libc)
		return (true);
	return (false);
}

int	strnstr_null1_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
