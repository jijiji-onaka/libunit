# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/05/10 11:40:50 by rmatsuka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libunit.a
TEST = libunit_test

CC = gcc -g -fsanitize=address

CFLAGS = # -Wall -Werror -Wextra -g -fsanitize=address

TEST_SRCS =	tests/main.c \
		tests/signal_test/00_launcher.c \
		tests/signal_test/01_true_test.c \
		tests/signal_test/02_false_test.c \
		tests/signal_test/03_segfault_test.c \
		tests/signal_test/04_bus_error_test.c \
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
		tests/isalnum_test/01_basic_test.c \
		tests/isalnum_test/02_basic2_test.c \
		tests/isalnum_test/03_all_test.c \
		tests/isalpha_test/00_launcher.c \
		tests/isalpha_test/01_basic_test.c \
		tests/isalpha_test/02_basic2_test.c \
		tests/isalpha_test/03_all_test.c \
		tests/isascii_test/00_launcher.c \
		tests/isascii_test/01_basic_test.c \
		tests/isascii_test/02_basic2_test.c \
		tests/isascii_test/03_all_test.c \
		tests/isdigit_test/00_launcher.c \
		tests/isdigit_test/01_basic_test.c \
		tests/isdigit_test/02_basic2_test.c \
		tests/isdigit_test/03_all_test.c \
		tests/isprint_test/00_launcher.c \
		tests/isprint_test/01_basic_test.c \
		tests/isprint_test/02_basic2_test.c \
		tests/isprint_test/03_all_test.c \


TEST_OBJS = ${TEST_SRCS:.c=.o}

LIBS = 	libft/libft.a

all: $(LIBS)
	make -C framework

FRAMEWORK = framework/libunit.a

test: all $(LIBS) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_OBJS) $(LIBS) $(FRAMEWORK)

$(LIBS): FORCE
	make -C libft/

FORCE:

clean:
	$(MAKE) clean -C libft/
	$(MAKE) clean -C framework/
	rm -f $(TEST_OBJS)

fclean: clean
	$(MAKE) fclean -C libft/
	$(MAKE) fclean -C framework/
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re FORCE
