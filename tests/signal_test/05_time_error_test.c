/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_time_error_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 08:02:43 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 04:48:18 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

static bool	do_time_error(void)
{
	while (42)
		;
	return (true);
}

int	signal_time_error_test(void)
{
	g_failed_testcase = "while (42)\
	;\
";
	if (do_time_error())
		return (0);
	else
		return (-1);
}
