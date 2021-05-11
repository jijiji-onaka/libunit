/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka < rmatsuka@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:36:33 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/11 11:47:58 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../libft/libft.h"
#define COLOR "\x1b[47m"
#define RESET "\x1b[49m"
#define OKC "\x1b[32m"
#define KOC "\x1b[30m"

typedef struct	s_unit_list
{
	int		(*f)(void);
	char	*name;
	struct 	s_unit_list	*next;
}				t_unit_test;

void	load_test(t_unit_test **list, char *name, int (*f)(void));
int		launch_tests(t_unit_test **list);
void	exit_fatal(int line, char *file);
void	ft_put_c(char c, int fd);
void	ft_put_d(int n, int fd);
void 	ft_put_s(char *s, int fd);


#endif
