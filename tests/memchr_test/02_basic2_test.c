/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 23:03:43 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int memchr_basic2_test(void)
{
	char *s;
	void *p1;
	void *p2;

	s = "42tokyo";
	p1 = ft_memchr(s,'a', sizeof(s));
	p2 = memchr(s, 'a', sizeof(s));
	if (p1 == p2)
		return (0);
	else
	    return (-1);
}