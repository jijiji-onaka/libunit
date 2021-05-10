/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 09:10:01 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 09:15:58 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	calloc_zero_test(void)
{
	char *s1 = ft_calloc(0, 0);
	char *s2 = calloc(0, 0);
	int result = 0;

	if (!memcmp(s1, s2, SIZE))
		result = 0;
	else
		result = -1;
	free(s1);
	free(s2);
	return (result);
}
