/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic4_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 19:21:05 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*big = "Foo Bar Baz";
	const char	*small = "z";
	char		*ft;
	char		*libc;

	ft = ft_strnstr(big, small, -1);
	libc = strnstr(big, small, -1);
	if (ft == libc)
		return (true);
	return (false);
}

int	strnstr_basic4_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
