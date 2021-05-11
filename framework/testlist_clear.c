/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:10:44 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 13:27:49 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	testlist_clear(t_unit_test **testlist)
{
	t_unit_test	*tmp;

	if (testlist == NULL || *testlist == NULL)
		return ;
	while (*testlist)
	{
		tmp = *testlist;
		*testlist = (*testlist)->next;
		free(tmp);
	}
}
