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
# include <ctype.h>

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
/*
** ATOI TEST
*/
int		atoi_launcher(void);
int		atoi_basic_test(void);
int		atoi_null_test(void);
int		atoi_intmax_test(void);
int		atoi_intmin_test(void);
int		atoi_space_test(void);
/*
** BZERO TEST
*/
int		bzero_launcher(void);
int		bzero_basic_test(void);
int		bzero_null_test(void);
int		bzero_zero_test(void);
int		bzero_bigsize_test(void);
int		bzero_minus_test(void);
/*
** CALLOC TEST
*/
int		calloc_launcher(void);
int		calloc_basic_test(void);
int		calloc_zero_test(void);
int		calloc_bigsize_test(void);
int		calloc_minus_test(void);
/*
** ISALNUM TEST
*/
int		isalnum_launcher(void);
int		isalnum_basic_test(void);
int		isalnum_basic2_test(void);
int		isalnum_all_test(void);
/*
** ISALPHA TEST
*/
int		isalpha_launcher(void);
int		isalpha_basic_test(void);
int		isalpha_basic2_test(void);
int		isalpha_all_test(void);
/*
** ISASCII TEST
*/
int		isascii_launcher(void);
int		isascii_basic_test(void);
int		isascii_basic2_test(void);
int		isascii_all_test(void);
/*
** ISDIGIT TEST
*/
int		isdigit_launcher(void);
int		isdigit_basic_test(void);
int		isdigit_basic2_test(void);
int		isdigit_all_test(void);
/*
** ISPRINT TEST
*/
int		isprint_launcher(void);
int		isprint_basic_test(void);
int		isprint_basic2_test(void);
int		isprint_all_test(void);
/*
** ITOA TEST
*/

/*
** MEMCCPY TEST
*/

/*
** MEMCHR TEST
*/

/*
** MEMCMP TEST
*/

/*
** MEMCPY TEST
*/

/*
** MEMMOVE TEST
*/

/*
** MEMSET TEST
*/

/*
**
*/




# define OK true
# define KO false
# define COLOR_YELLOW "\033[33m"
# define BOLD "\033[1m"
# define COLOR_RESET "\033[0m"
# define SIZE 100
# define BIG 100000
#endif
