# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 14:16:52 by tjinichi          #+#    #+#              #
#    Updated: 2021/05/09 20:49:01 by rmatsuka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a
TEST = libunit_test

CC = gcc -g -fsanitize=address

CFLAGS = # -Wall -Werror -Wextra -g -fsanitize=address

TEST_SRCS =	tests/main.c \
		tests/signal_launch/00_launcher.c \
		tests/signal_launch/01_true_test.c \
		tests/signal_launch/02_false_test.c \
		tests/signal_launch/03_segfault_test.c \
		tests/signal_launch/04_bus_error_test.c \

TEST_OBJS = ${TEST_SRCS:.c=.o}

LIBS = 	libft/libft.a

all: $(LIBS)
	make -C framework

FRAMEWORK = framework/libunit.a

test: $(LIBS) $(TEST_OBJS)
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
