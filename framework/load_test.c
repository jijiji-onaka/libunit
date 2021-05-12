/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:24:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/12 10:01:07 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	check_list(t_unit_test **list, char *test_name, int (*f)(void))
{
	if (list == NULL || f == NULL)
		return (1);
	if (*list == NULL)
	{
		*list = malloc(sizeof(t_unit_test));
		if (*list == NULL)
		{
			exit_fatal(__LINE__, __FILE__);
			return (1);
		}
		(*list)->name = test_name;
		(*list)->f = f;
		(*list)->next = NULL;
		return (1);
	}
	return (0);
}

void	load_test(t_unit_test **list, char *test_name, int (*f)(void))
{
	t_unit_test	*testlist;

	if (check_list(list, test_name, f))
		return ;
	testlist = *list;
	while (testlist->next)
		testlist = testlist->next;
	testlist->next = malloc(sizeof(t_unit_test));
	if (testlist->next == NULL)
	{
		exit_fatal(__LINE__, __FILE__);
		return ;
	}
	testlist = testlist->next;
	testlist->name = test_name;
	testlist->f = f;
	testlist->next = NULL;
}
