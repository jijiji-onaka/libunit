/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_minus_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:19:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 09:20:54 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	calloc_minus_test(void)
{
	char *s1 = ft_calloc(-42, -42);
	char *s2 = calloc(-42, -42);
	int result = 0;

	if (!memcmp(s1, s2, 1))
		result = 0;
	else
		result = -1;
	free(s1);
	free(s2);
	return (result);
}
