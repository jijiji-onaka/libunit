/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null3_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:43:54 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/11 18:44:13 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strncmp_null3_test(void)
{
	if (strncmp(NULL, NULL, 0) == ft_strncmp(NULL, NULL, 0))
		return (0);
	else
		return (-1);
}
