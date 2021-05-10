/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:54:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 22:58:12 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int memchr_null_test(void)
{
	void *p1;
	void *p2;

	p1 = ft_memchr(NULL,'a', 1);
	p2 = memchr(NULL, 'a', 1);
	if (p1 == p2)
		return (0);
	else
	    return (-1);
}