# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/05/15 10:47:38 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEST = libunit_test


CC = gcc
CFLAGS = -Wall -Werror -Wextra # -g -fsanitize=address

LIBDIR = 	./libft
LIBS = 	$(LIBDIR)/libft.a

TEST_SRCS =	tests/main.c \
		tests/signal_test/00_launcher.c \
		tests/signal_test/01_true_test.c \
		tests/signal_test/02_false_test.c \
		tests/signal_test/03_segfault_test.c \
		tests/signal_test/04_bus_error_test.c \
		tests/signal_test/05_time_error_test.c \
		tests/signal_test/06_sigabrt_test.c \
		tests/signal_test/07_fpe_test.c \
		tests/signal_test/08_crash_test.c \
		tests/signal_test/09_ill_test.c \
		tests/strlen_test/00_launcher.c \
		tests/strlen_test/01_basic_test.c \
		tests/strlen_test/02_null_test.c \
		tests/strlen_test/03_long_string_test.c \
		tests/atoi_test/00_launcher.c \
		tests/atoi_test/01_basic_test.c \
		tests/atoi_test/02_null_test.c \
		tests/atoi_test/03_intmax_test.c \
		tests/atoi_test/04_intmin_test.c \
		tests/atoi_test/05_space_test.c	\
		tests/bzero_test/00_launcher.c \
		tests/bzero_test/01_basic_test.c \
		tests/bzero_test/02_null_test.c \
		tests/bzero_test/03_zero_test.c \
		tests/bzero_test/04_bigsize_test.c \
		tests/bzero_test/05_minus_test.c \
		tests/calloc_test/00_launcher.c \
		tests/calloc_test/01_basic_test.c \
		tests/calloc_test/02_zero_test.c \
		tests/calloc_test/03_bigsize_test.c \
		tests/calloc_test/04_minus_test.c \
		tests/isalnum_test/00_launcher.c \
		tests/isalnum_test/01_basic1_test.c \
		tests/isalnum_test/02_basic2_test.c \
		tests/isalnum_test/03_all_test.c \
		tests/isalpha_test/00_launcher.c \
		tests/isalpha_test/01_basic1_test.c \
		tests/isalpha_test/02_basic2_test.c \
		tests/isalpha_test/03_all_test.c \
		tests/isascii_test/00_launcher.c \
		tests/isascii_test/01_basic1_test.c \
		tests/isascii_test/02_basic2_test.c \
		tests/isascii_test/03_all_test.c \
		tests/isdigit_test/00_launcher.c \
		tests/isdigit_test/01_basic1_test.c \
		tests/isdigit_test/02_basic2_test.c \
		tests/isdigit_test/03_all_test.c \
		tests/isprint_test/00_launcher.c \
		tests/isprint_test/01_basic1_test.c \
		tests/isprint_test/02_basic2_test.c \
		tests/isprint_test/03_all_test.c \
		tests/itoa_test/00_launcher.c \
		tests/itoa_test/01_basic_test.c \
		tests/itoa_test/02_intmax_test.c \
		tests/itoa_test/03_intmin_test.c \
		tests/itoa_test/04_zero_test.c \
		tests/memccpy_test/00_launcher.c \
		tests/memccpy_test/01_basic1_test.c \
		tests/memccpy_test/02_basic2_test.c \
		tests/memccpy_test/03_basic3_test.c \
		tests/memccpy_test/04_null1_test.c \
		tests/memccpy_test/05_null2_test.c \
		tests/memchr_test/00_launcher.c \
		tests/memchr_test/01_basic1_test.c \
		tests/memchr_test/02_basic2_test.c \
		tests/memchr_test/03_basic3_test.c \
		tests/memchr_test/04_null1_test.c \
		tests/memchr_test/05_null2_test.c \
		tests/memcmp_test/00_launcher.c \
		tests/memcmp_test/01_basic1_test.c \
		tests/memcmp_test/02_basic2_test.c \
		tests/memcmp_test/03_basic3_test.c \
		tests/memcmp_test/04_null1_test.c \
		tests/memcmp_test/05_null2_test.c \
		tests/memcpy_test/00_launcher.c \
		tests/memcpy_test/01_basic1_test.c \
		tests/memcpy_test/02_basic2_test.c \
		tests/memcpy_test/03_basic3_test.c \
		tests/memcpy_test/04_null1_test.c \
		tests/memcpy_test/05_null2_test.c \
		tests/memmove_test/00_launcher.c \
		tests/memmove_test/01_basic1_test.c \
		tests/memmove_test/02_basic2_test.c \
		tests/memmove_test/03_basic3_test.c \
		tests/memmove_test/04_null1_test.c \
		tests/memmove_test/05_null2_test.c \
		tests/memset_test/00_launcher.c \
		tests/memset_test/01_basic1_test.c \
		tests/memset_test/02_basic2_test.c \
		tests/memset_test/03_basic3_test.c \
		tests/memset_test/04_null1_test.c \
		tests/memset_test/05_null2_test.c \
		tests/split_test/00_launcher.c \
		tests/split_test/01_basic_test.c \
		tests/split_test/02_empty1_test.c \
		tests/split_test/03_empty2_test.c \
		tests/split_test/04_empty3_test.c \
		tests/split_test/05_same_str_test.c \
		tests/split_test/06_null_test.c \
		tests/strchr_test/00_launcher.c \
		tests/strchr_test/01_basic_test.c \
		tests/strchr_test/02_empty1_test.c \
		tests/strchr_test/03_empty2_test.c \
		tests/strchr_test/04_empty3_test.c \
		tests/strchr_test/05_match_head_test.c \
		tests/strchr_test/06_match_tail_test.c \
		tests/strdup_test/00_launcher.c \
		tests/strdup_test/01_basic_test.c \
		tests/strdup_test/02_empty_test.c \
		tests/strdup_test/03_long_string_test.c \
		tests/strjoin_test/00_launcher.c \
		tests/strjoin_test/01_basic_test.c \
		tests/strjoin_test/02_empty1_test.c \
		tests/strjoin_test/03_empty2_test.c \
		tests/strjoin_test/04_empty3_test.c \
		tests/strjoin_test/05_null1_test.c \
		tests/strjoin_test/06_null2_test.c \
		tests/strjoin_test/07_null3_test.c \
		tests/strlcat_test/00_launcher.c \
		tests/strlcat_test/01_basic1_test.c \
		tests/strlcat_test/02_basic2_test.c \
		tests/strlcat_test/03_basic3_test.c \
		tests/strlcat_test/04_basic4_test.c \
		tests/strlcat_test/05_basic5_test.c \
		tests/strlcat_test/06_null1_test.c \
		tests/strlcat_test/07_null2_test.c \
		tests/strlcpy_test/00_launcher.c \
		tests/strlcpy_test/01_basic1_test.c \
		tests/strlcpy_test/02_basic2_test.c \
		tests/strlcpy_test/03_basic3_test.c \
		tests/strlcpy_test/04_basic4_test.c \
		tests/strlcpy_test/05_basic5_test.c \
		tests/strlcpy_test/06_null1_test.c \
		tests/strlcpy_test/07_null2_test.c \
		tests/strmapi_test/00_launcher.c \
		tests/strmapi_test/01_basic_test.c \
		tests/strmapi_test/02_null1_test.c \
		tests/strmapi_test/03_null2_test.c \
		tests/strmapi_test/04_null3_test.c \
		tests/strncmp_test/00_launcher.c \
		tests/strncmp_test/01_basic1_test.c \
		tests/strncmp_test/02_basic2_test.c \
		tests/strncmp_test/03_basic3_test.c \
		tests/strncmp_test/04_basic4_test.c \
		tests/strncmp_test/05_null1_test.c \
		tests/strncmp_test/06_null2_test.c \
		tests/strncmp_test/07_null3_test.c \
		tests/strncmp_test/08_null4_test.c \
		tests/strncmp_test/09_null5_test.c \
		tests/strncmp_test/10_null6_test.c \
		tests/strnstr_test/00_launcher.c \
		tests/strnstr_test/01_basic1_test.c \
		tests/strnstr_test/02_basic2_test.c \
		tests/strnstr_test/03_basic3_test.c \
		tests/strnstr_test/04_basic4_test.c \
		tests/strnstr_test/05_null1_test.c \
		tests/strnstr_test/06_null2_test.c \
		tests/strnstr_test/07_null3_test.c \
		tests/strnstr_test/08_null4_test.c \
		tests/strrchr_test/00_launcher.c \
		tests/strrchr_test/01_basic_test.c \
		tests/strrchr_test/02_empty1_test.c \
		tests/strrchr_test/03_empty2_test.c \
		tests/strrchr_test/04_empty3_test.c \
		tests/strrchr_test/05_match_head_test.c \
		tests/strrchr_test/06_match_tail_test.c \
		tests/strtrim_test/00_launcher.c \
		tests/strtrim_test/01_basic1_test.c \
		tests/strtrim_test/02_basic2_test.c \
		tests/strtrim_test/03_basic3_test.c \
		tests/strtrim_test/04_same_test.c \
		tests/strtrim_test/05_null1_test.c \
		tests/strtrim_test/06_null2_test.c \
		tests/strtrim_test/07_null3_test.c \
		tests/substr_test/00_launcher.c \
		tests/substr_test/01_basic1_test.c \
		tests/substr_test/02_basic2_test.c \
		tests/substr_test/03_basic3_test.c \
		tests/substr_test/04_null_test.c \
		tests/tolower_test/00_launcher.c \
		tests/tolower_test/01_all_test.c \
		tests/toupper_test/00_launcher.c \
		tests/toupper_test/01_all_test.c \
		tests/toupper_test/02_basic1_test.c \
		tests/toupper_test/03_basic2_test.c \
		tests/toupper_test/04_basic3_test.c \
		tests/toupper_test/05_basic4_test.c \
		tests/toupper_test/06_basic5_test.c \
		tests/toupper_test/07_basic6_test.c \
		tests/toupper_test/08_basic7_test.c \
		tests/toupper_test/09_basic8_test.c \
		tests/toupper_test/10_basic9_test.c \
		tests/toupper_test/11_basic10_test.c \
		tests/toupper_test/12_basic11_test.c \
		tests/toupper_test/13_basic12_test.c \
		tests/toupper_test/14_basic13_test.c \
		tests/toupper_test/15_basic14_test.c \

TEST_OBJS = ${TEST_SRCS:.c=.o}

all: $(LIBS)
	make -C framework

b_all: $(LIBS)
	make bonus -C framework

FRAMEWORK = framework/libunit.a

test: all $(LIBS) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_OBJS) -L $(LIBDIR) -lft $(FRAMEWORK)
	./$(TEST) || true

test_bonus: b_all $(LIBS) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_OBJS) -L $(LIBDIR) -lft $(FRAMEWORK)
	./$(TEST) || true

$(LIBS): FORCE
	make -C $(LIBDIR)/

FORCE:

clean:
	$(MAKE) clean -C $(LIBDIR)/
	$(MAKE) clean -C framework/
	rm -f $(TEST_OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBDIR)/
	$(MAKE) fclean -C framework/
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re FORCE
