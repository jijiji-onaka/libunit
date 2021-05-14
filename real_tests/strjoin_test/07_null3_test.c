/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null3_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:39:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	null_test(void)
{
	char	*ft;

	g_failed_testcase = "char	*ft;\
\n\
ft = ft_strjoin(NULL, NULL);\
if (ft == NULL)\
	return (true);\
return (false);";
	ft = ft_strjoin(NULL, NULL);
	if (ft == NULL)
		return (true);
	return (false);
}

int	strjoin_null3_test(void)
{
	if (null_test())
		return (0);
	else
		return (-1);
}
