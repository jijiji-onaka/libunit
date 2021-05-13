/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:36:33 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/13 10:23:29 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/wait.h>
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

# define MSG_OK			"\033[38;5;2m[OK]\033[0m\n"
# define MSG_KO 		"\033[38;5;9m[KO]\033[0m\n"
# define MSG_SEGV 		"\033[38;5;153m[SEGV]\033[0m\n"
# define MSG_BUS		"\033[38;5;80m[BUS]\033[0m\n"
# define MSG_TIMEOUT 	"\033[38;5;75m[TIMEOUT]\033[0m\n"
# define MSG_ABRT 		"\033[38;5;13m[ABRT]\033[0m\n"
# define MSG_FPE 		"\033[38;5;112m[FPE]\033[0m\n"
# define MSG_ILL 		"\033[38;5;214m[ILL]\033[0m\e[24m\n"
# define MSG_CRASH 		"\033[38;5;220m[CRASH]\033[0m\n"

typedef struct s_unit_list
{
	int					(*f)(void);
	char				*name;
	struct s_unit_list	*next;
}				t_unit_test;

void	load_test(t_unit_test **list, char *name, int (*f)(void));
int		launch_tests(t_unit_test **list);
void	exit_fatal(int line, char *file);
void	ft_put_c(char c, int fd);
void	ft_put_d(int n, int fd);
void	ft_put_s(char *s, int fd);
void	testlist_clear(t_unit_test **testlist);
#endif
