/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:34:10 by tjinichi          #+#    #+#             */
/*   Updated: 2021/05/09 14:53:18 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNAL_TEST_H
# define SIGNAL_TEST_H

# include "../framework/libunit.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

void	print_title(char *title);
/*
** SIGNAL TEST
*/
int		signal_launcher(void);
int		signal_true_test(void);
int		signal_false_test(void);
int		signal_segfault_test(void);
int		signal_bus_error_test(void);
/*
** STRLEN TEST
*/
int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);
int		strlen_long_string_test(void);

# define OK true
# define KO false
# define COLOR_YELLOW "\033[33m"
# define BOLD "\033[1m"
# define COLOR_RESET "\033[0m"

#endif
