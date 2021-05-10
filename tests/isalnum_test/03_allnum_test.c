/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_allnum_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 10:14:26 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 10:23:57 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./../tester.h"

int	isalnum_allnum_test(void)
{
	int	i;

	i = 0;
	while (i < 500)
	{
		if (ft_isalnum(i) != isalnum(i))
			return (-1);
		i++;
	}
	return (0);
}
