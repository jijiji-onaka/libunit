/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcase_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 03:17:19 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:18:18 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	when_is_condition(bool *is_condition, int *indent)
{
	*is_condition = true;
	(*indent)++;
}

void	when_in_condition(int *i, int *indent)
{
	g_testcode[(*i)++] = '\n';
	(*indent)--;
}

void	when_in_scope(int *i, bool *in_scope)
{
	g_testcode[(*i)++] = '\n';
	*in_scope = true;
}

void	when_finish_scope(int *i, bool *in_scope)
{
	g_testcode[(*i)++] = '\n';
	*in_scope = false;
}

void	when_semicolon(int *i, bool *in_scope,
			bool *is_condition, bool *head)
{
	g_testcode[(*i)++] = '\n';
	if (*in_scope == false)
	{
		*is_condition = false;
		*head = true;
	}
}
