/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:10:44 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/13 22:08:59 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

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
