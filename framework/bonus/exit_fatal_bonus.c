/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_fatal_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:28:45 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 22:07:44 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	exit_fatal(int line, char *file)
{
	write(STDERR_FILENO, "STDLIB ERROR\n", 13);
	ft_put_s(file, STDERR_FILENO);
	write(STDERR_FILENO, ":", 1);
	ft_put_d(line, STDERR_FILENO);
	write(STDERR_FILENO, "\n", 1);
	exit(EXIT_FAILURE);
}
