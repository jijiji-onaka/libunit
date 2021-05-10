/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:52:34 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 23:02:22 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int memchr_basic3_test(void)
{
	char *s;
	void *p1;
	void *p2;

	s = "42tokyo";
	p1 = ft_memchr(s,'k', 3);
	p2 = memchr(s, 'k', 3);
	if (p1 == p2)
		return (0);
	else
	    return (-1);
}