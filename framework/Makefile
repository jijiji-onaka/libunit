# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 16:29:38 by rmatsuka          #+#    #+#              #
#    Updated: 2021/05/15 03:33:58 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libunit.a
M_NAME =		libunit_mandatory.a
B_NAME =		libunit_bonus.a
SRCS =		srcs/launch_tests.c \
			srcs/load_test.c \
			srcs/exit_fatal.c \
			srcs/utilities.c \
			srcs/testlist_clear.c

B_SRCS =	bonus/launch_tests_bonus.c \
			bonus/load_test_bonus.c \
			bonus/exit_fatal_bonus.c \
			bonus/utilities_bonus.c \
			bonus/testlist_clear_bonus.c \
			bonus/testcase.c \
			bonus/child_process.c \
			bonus/testcase_utils.c \


OBJS = 		$(SRCS:.c=.o)
B_OBJS = 		$(B_SRCS:.c=.o)

CC 	=		gcc
CFLAGS =	-Werror -Wall -Wextra

RM		=	rm -f

all:	$(M_NAME)

bonus:	$(B_NAME)

$(M_NAME):	$(OBJS)
	ar rcs $(M_NAME) $(OBJS)
	@mv $(M_NAME) $(NAME)

$(B_NAME):	$(B_OBJS)
	ar rcs $(B_NAME) $(B_OBJS)
	@mv $(B_NAME) $(NAME)

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
