# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 16:29:38 by rmatsuka          #+#    #+#              #
#    Updated: 2021/05/08 16:35:13 by rmatsuka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libunit.a
SRCS =
OBJS = 		$(SRCS:.c=.o)

CC 	=		gcc
CFLAGS =	Werror -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
