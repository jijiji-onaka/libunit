/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_match_tail_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 16:27:10 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strchr_match_tail_test(void)
{
	const char	*str = "766668";
	const char	 chr= '8';

	if (strchr(str, chr) == ft_strchr(str, chr))
		return (0);
	else
		return (-1);
}
