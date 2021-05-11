/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 19:19:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*big = "Foo Bar Baz";
	const char	*small = "Bar";
	char		*ft;
	char		*libc;

	ft = ft_strnstr(big, small, 7);
	libc = strnstr(big, small, 7);
	if (ft == libc)
		return (true);
	return (false);
}

int	strnstr_basic2_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
