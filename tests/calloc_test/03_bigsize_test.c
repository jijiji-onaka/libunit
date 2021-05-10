/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:17:58 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 09:19:33 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	calloc_bigsize_test(void)
{
	char *s1 = ft_calloc(BIG, 1);
	char *s2 = calloc(BIG, 1);
	int result = 0;

	if (!memcmp(s1, s2, BIG))
		result = 0;
	else
		result = -1;
	free(s1);
	free(s2);
	return (result);
}
