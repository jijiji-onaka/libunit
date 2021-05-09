/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:24:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/09 21:21:58 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void    load_test(t_unit_test **list, char *test_name, int (*f)(void))
{
    t_unit_test *testlist;

    if (list == NULL || f == NULL)
        return ;
    if (*list == NULL)
    {
        *list = malloc(sizeof(list));
        (*list)->name = test_name;
        (*list)->f = f;
        (*list)->next = NULL;
        return ;
    }
    testlist = *list;
    while (testlist->next)
        testlist = testlist->next;
    testlist->next = malloc(sizeof(list));
    if (testlist->next == NULL)
        return ;
    testlist = testlist->next;
    testlist->name = test_name;
    testlist->f = f;
    testlist->next = NULL;
}
