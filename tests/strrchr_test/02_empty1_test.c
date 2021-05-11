/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 19:32:14 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strrchr_empty1_test(void)
{
	const char	*str = "";
	const char	 chr= 'T';

	if (strrchr(str, chr) == ft_strrchr(str, chr))
		return (0);
	else
		return (-1);
}
