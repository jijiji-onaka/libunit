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

#ifndef TESTER_H
# define TESTER_H

# include "../framework/includes/libunit.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include <ctype.h>
# include <fcntl.h>

void	print_title(char *title);
/*
** SIGNAL TEST
*/
int		signal_launcher(void);
int		signal_true_test(void);
int		signal_false_test(void);
int		signal_segfault_test(void);
int		signal_bus_error_test(void);
int		signal_time_error_test(void);
int		signal_sigabrt_test(void);
int		signal_fpe_test(void);
int		signal_crash_test(void);
int		signal_ill_test(void);
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
int		isalnum_basic1_test(void);
int		isalnum_basic2_test(void);
int		isalnum_all_test(void);
/*
** ISALPHA TEST
*/
int		isalpha_launcher(void);
int		isalpha_basic1_test(void);
int		isalpha_basic2_test(void);
int		isalpha_all_test(void);
/*
** ISASCII TEST
*/
int		isascii_launcher(void);
int		isascii_basic1_test(void);
int		isascii_basic2_test(void);
int		isascii_all_test(void);
/*
** ISDIGIT TEST
*/
int		isdigit_launcher(void);
int		isdigit_basic1_test(void);
int		isdigit_basic2_test(void);
int		isdigit_all_test(void);
/*
** ISPRINT TEST
*/
int		isprint_launcher(void);
int		isprint_basic1_test(void);
int		isprint_basic2_test(void);
int		isprint_all_test(void);
/*
** ITOA TEST
*/
int		itoa_launcher(void);
int		itoa_basic_test(void);
int		itoa_intmax_test(void);
int		itoa_intmin_test(void);
int		itoa_zero_test(void);
/*
** MEMCCPY TEST
*/
int		memccpy_launcher(void);
int		memccpy_basic1_test(void);
int		memccpy_basic2_test(void);
int		memccpy_basic3_test(void);
int		memccpy_null1_test(void);
int		memccpy_null2_test(void);
/*
** MEMCHR TEST
*/
int		memchr_launcher(void);
int		memchr_basic1_test(void);
int		memchr_basic2_test(void);
int		memchr_basic3_test(void);
int		memchr_null1_test(void);
int		memchr_null2_test(void);
/*
** MEMCMP TEST
*/
int		memcmp_launcher(void);
int		memcmp_basic1_test(void);
int		memcmp_basic2_test(void);
int		memcmp_basic3_test(void);
int		memcmp_null1_test(void);
int		memcmp_null2_test(void);

/*
** MEMCPY TEST
*/
int		memcpy_launcher(void);
int		memcpy_basic1_test(void);
int		memcpy_basic2_test(void);
int		memcpy_basic3_test(void);
int		memcpy_null1_test(void);
int		memcpy_null2_test(void);
/*
** MEMMOVE TEST
*/
int		memmove_launcher(void);
int		memmove_basic1_test(void);
int		memmove_basic2_test(void);
int		memmove_basic3_test(void);
int		memmove_null1_test(void);
int		memmove_null2_test(void);
/*
** MEMSET TEST
*/
int		memset_launcher(void);
int		memset_basic1_test(void);
int		memset_basic2_test(void);
int		memset_basic3_test(void);
int		memset_null1_test(void);
int		memset_null2_test(void);
/*
** SPLIT TEST
*/
int		split_launcher(void);
int		split_basic_test(void);
int		split_empty1_test(void);
int		split_empty2_test(void);
int		split_empty3_test(void);
int		split_same_str_test(void);
int		split_null_test(void);
/*
** STRCHR TEST
*/
int		strchr_launcher(void);
int		strchr_basic_test(void);
int		strchr_empty1_test(void);
int		strchr_empty2_test(void);
int		strchr_empty3_test(void);
int		strchr_match_head_test(void);
int		strchr_match_tail_test(void);
/*
** STRDUP TEST
*/
int		strdup_launcher(void);
int		strdup_basic_test(void);
int		strdup_empty_test(void);
int		strdup_long_str_test(void);
/*
** STRJOIN TEST
*/
int		strjoin_launcher(void);
int		strjoin_basic_test(void);
int		strjoin_empty1_test(void);
int		strjoin_empty2_test(void);
int		strjoin_empty3_test(void);
int		strjoin_null1_test(void);
int		strjoin_null2_test(void);
int		strjoin_null3_test(void);
/*
** STRLCAT TEST
*/
int		strlcat_launcher(void);
int		strlcat_basic1_test(void);
int		strlcat_basic2_test(void);
int		strlcat_basic3_test(void);
int		strlcat_basic4_test(void);
int		strlcat_basic5_test(void);
int		strlcat_null1_test(void);
int		strlcat_null2_test(void);
/*
** STRLCPY TEST
*/
int		strlcpy_launcher(void);
int		strlcpy_basic1_test(void);
int		strlcpy_basic2_test(void);
int		strlcpy_basic3_test(void);
int		strlcpy_basic4_test(void);
int		strlcpy_basic5_test(void);
int		strlcpy_null1_test(void);
int		strlcpy_null2_test(void);
/*
** STRMAPI TEST
*/
int		strmapi_launcher(void);
int		strmapi_basic_test(void);
int		strmapi_null1_test(void);
int		strmapi_null2_test(void);
int		strmapi_null3_test(void);
/*
** STRNCMP TEST
*/
int		strncmp_launcher(void);
int		strncmp_basic1_test(void);
int		strncmp_basic2_test(void);
int		strncmp_basic3_test(void);
int		strncmp_basic4_test(void);
int		strncmp_basic5_test(void);
int		strncmp_null1_test(void);
int		strncmp_null2_test(void);
int		strncmp_null3_test(void);
int		strncmp_null4_test(void);
int		strncmp_null5_test(void);
int		strncmp_null6_test(void);
/*
** STRNSTR TEST
*/
int		strnstr_launcher(void);
int		strnstr_basic1_test(void);
int		strnstr_basic2_test(void);
int		strnstr_basic3_test(void);
int		strnstr_basic4_test(void);
int		strnstr_null1_test(void);
int		strnstr_null2_test(void);
int		strnstr_null3_test(void);
int		strnstr_null4_test(void);
/*
** STRRCHR TEST
*/
int		strrchr_launcher(void);
int		strrchr_basic_test(void);
int		strrchr_empty1_test(void);
int		strrchr_empty2_test(void);
int		strrchr_empty3_test(void);
int		strrchr_match_head_test(void);
int		strrchr_match_tail_test(void);
/*
** STRTRIM TEST
*/
int		strtrim_launcher(void);
int		strtrim_basic1_test(void);
int		strtrim_basic2_test(void);
int		strtrim_basic3_test(void);
int		strtrim_same_test(void);
int		strtrim_null1_test(void);
int		strtrim_null2_test(void);
int		strtrim_null3_test(void);
/*
** SUBSTR TEST
*/
int		substr_launcher(void);
int		substr_basic1_test(void);
int		substr_basic2_test(void);
int		substr_basic3_test(void);
int		substr_null_test(void);
/*
** TOLOWER TEST
*/
int		tolower_launcher(void);
int		tolower_all_test(void);
/*
** TOUPPER TEST
*/
int		toupper_launcher(void);
int		toupper_all_test(void);
int		toupper_basic1_test(void);
int		toupper_basic2_test(void);
int		toupper_basic3_test(void);
int		toupper_basic4_test(void);
int		toupper_basic5_test(void);
int		toupper_basic6_test(void);
int		toupper_basic7_test(void);
int		toupper_basic8_test(void);
int		toupper_basic9_test(void);
int		toupper_basic10_test(void);
int		toupper_basic11_test(void);
int		toupper_basic12_test(void);
int		toupper_basic13_test(void);
int		toupper_basic14_test(void);

/*
**
*/
# define OK 1
# define KO 0
# define COLOR_YELLOW "\033[33m"
# define BOLD "\033[1m"
# define COLOR_RESET "\033[0m"
# define SIZE 100
# define BIG 100000
# define TEST_NUM 10

int		g_result_file_fd;
char	*g_failed_testcase;

#endif
