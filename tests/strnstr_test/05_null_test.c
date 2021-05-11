/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 19:29:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*small = "z";
	char		*ft;
	char		*libc;

	ft = ft_strnstr(NULL, small, 0);
	libc = strnstr(NULL, small, 0);
	if (ft == libc)
		return (true);
	return (false);
}

int	strnstr_null_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
