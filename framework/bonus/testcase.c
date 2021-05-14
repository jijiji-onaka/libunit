/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 02:53:55 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/15 03:21:19 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

static void	initialize(bool *is_condition, bool *in_scope,
			int *indent, int *index)
{
	int	i;

	*is_condition = false;
	*in_scope = false;
	*indent = 0;
	i = -1;
	while (++i < 10000)
		g_testcode[i] = '\0';
	*index = 0;
}

static void	cmp_condition(char *buf, bool *is_condition, int *indent)
{
	if (strncmp(buf, "else", 4) == 0 || strncmp(buf, "if", 2) == 0
		|| strncmp(buf, "while", 5) == 0)
		when_is_condition(is_condition, indent);
}

static void	create_testcase(char *buf)
{
	bool	is_condition;
	bool	head;
	bool	in_scope;
	int		i;
	int		indent;

	initialize(&is_condition, &head, &indent, &i);
	while (*buf)
	{
		cmp_condition(buf, &is_condition, &indent);
		if (is_condition == true && *buf == '\t' && indent == 1)
			when_in_condition(&i, &indent);
		else if (*buf == '\t' && head == true && (buf++ || 1))
			continue ;
		else if (*buf == '{' && is_condition == true)
			when_in_scope(&i, &in_scope);
		g_testcode[i++] = *buf;
		head = false;
		if (strncmp(buf, ";", 1) == 0)
			when_semicolon(&i, &in_scope, &is_condition, &head);
		if (*buf == '}' && is_condition == true)
			when_finish_scope(&i, &in_scope);
		buf++;
	}
}

void	put_testcase(char *buf)
{
	create_testcase(buf);
	ft_put_s(g_testcode, g_result_file_fd);
}
