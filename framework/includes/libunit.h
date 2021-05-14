/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:36:33 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/15 03:35:17 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/wait.h>
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <string.h>

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
	char				*file_name;
	struct s_unit_list	*next;
}				t_unit_test;

void	load_test(t_unit_test **list, char *name, int (*f)(void));
int		launch_tests(t_unit_test **list);
void	exit_fatal(int line, char *file);
void	ft_put_c(char c, int fd);
void	ft_put_d(int n, int fd);
void	ft_put_s(char *s, int fd);
void	testlist_clear(t_unit_test **testlist);
void	put_status(char *color, char *msg);
int		search_test(char *p1, char *p2);
void	put_testcase(char *buf);
void	when_is_condition(bool *is_condition, int *indent);
void	when_in_condition(int *i, int *indent);
void	when_in_scope(int *i, bool *in_scope);
void	when_finish_scope(int *i, bool *in_scope);
void	when_semicolon(int *i, bool *in_scope,
			bool *is_condition, bool *head);
void	child_process(int pipe_fd[2], int (*f)(void), char *test_name);

extern int	g_result_file_fd;
extern char	*g_failed_testcase;
char		g_buf[1024];
char		g_testcode[10000];

#endif
