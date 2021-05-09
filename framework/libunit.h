/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:36:33 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/09 20:51:09 by rmatsuka         ###   ########.fr       */
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

/* 1ノード1テストのリスト */
/* これを宣言する大元でNULL初期化しないといけない */
typedef struct	s_unit_list
{
	int		(*f)(void);
	char	*name;
	struct 	s_unit_list	*next;
}				t_unit_test;

/* 受け取ったテストをリストに追加 */
void	load_test(t_unit_test **list, char *name, int (*f)(void));

/* リストのテスト実行する */
int		launch_tests(t_unit_test **list);

/* malloc失敗した場合など */
void	exit_fatal(void);

#endif
