/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:02:22 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 13:31:01 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_put_s(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}

void	ft_put_c(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_put_d(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		ft_put_c('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_put_d(num / 10, fd);
		ft_put_d(num % 10, fd);
	}
	else
		ft_put_c(num + '0', fd);
}
