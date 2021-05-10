/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:01:09 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 09:09:12 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	calloc_basic_test(void)
{
	char *s1 = ft_calloc(SIZE, 1);
	char *s2 = calloc(SIZE, 1);
	int result = 0;

	if (!memcmp(s1, s2, SIZE))
		result = 0;
	else
		result = -1;
	free(s1);
	free(s2);
	return (result);
}
