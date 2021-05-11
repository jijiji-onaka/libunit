/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_same_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 19:48:00 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	basic_test(void)
{
	const char	*ans = "";
	char		*ft;

	ft = ft_strtrim("abcbcabcabcbc", "abc");
	if (strcmp(ans, ft) == 0)
		return (true);
	return (false);
}

int	strtrim_same_test(void)
{
	if (basic_test() == true)
		return (0);
	else
		return (-1);
}
