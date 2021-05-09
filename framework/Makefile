# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 16:29:38 by rmatsuka          #+#    #+#              #
#    Updated: 2021/05/09 21:11:25 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libunit.a
SRCS =		launch_tests.c \
			load_test.c \

OBJS = 		$(SRCS:.c=.o)

CC 	=		gcc
CFLAGS =	-Werror -Wall -Wextra

RM		=	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS) ../libft/libft.a

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
