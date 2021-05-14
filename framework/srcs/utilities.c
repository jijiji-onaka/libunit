/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:02:22 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 02:38:53 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	put_status(char *color, char *msg)
{
	ft_put_s(color, STDOUT_FILENO);
	ft_put_s(msg, STDOUT_FILENO);
	ft_put_s(msg, g_result_file_fd);
	ft_put_s("\n", g_result_file_fd);
	write(STDOUT_FILENO, "\033[0m\n", 5);
}

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

int	search_test(char *p1, char *p2)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)p1;
	s2 = (unsigned char *)p2;
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
