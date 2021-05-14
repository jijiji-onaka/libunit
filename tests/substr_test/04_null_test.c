/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 01:36:31 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test(void)
{
	char		*ft;

	g_failed_testcase = "char		*ft;\
\n\
ft = ft_substr(NULL, 8, 7);\
if (ft == NULL)\
	return (true);\
return (false);";
	ft = ft_substr(NULL, 8, 7);
	if (ft == NULL)
		return (true);
	return (false);
}

int	substr_null_test(void)
{
	if (null_test() == true)
		return (0);
	else
		return (-1);
}
