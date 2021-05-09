/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:51:56 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 14:57:27 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	strlen_basic_test(void)
{
	if (ft_strlen("42Tokyo") == strlen("42Toyko"))
		return (0);
	else
		return (-1);
}
