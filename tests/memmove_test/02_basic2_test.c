/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:14 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 08:48:29 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	memmove_basic2_test(void)
{
	char	*s1;
	char	*s2;
	int		ans;

	s1 = malloc(sizeof(char) * SIZE);
	s2 = malloc(sizeof(char) * SIZE);
	memset(s1, '1', SIZE);
	memset(s2, '1', SIZE);
	ft_memmove(s1, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 10);
	memmove(s2, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 10);
	if (!strcmp(s1, s2))
		ans = 0;
	else
		ans = -1;
	free(s1);
	free(s2);
	return (ans);
}
