/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:47:06 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:53:41 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	atoi_space_test(void)
{
	g_failed_testcase = "if (ft_atoi(\"     -42\") == atoi(\"     -42\"))\
	return (0);\
else\
	return (-1);";
	if (ft_atoi("     -42") == atoi("     -42"))
		return (0);
	else
		return (-1);
}
