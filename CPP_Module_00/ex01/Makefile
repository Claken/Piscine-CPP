# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 23:56:52 by sachouam          #+#    #+#              #
#    Updated: 2021/11/27 00:35:11 by sachouam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

SRC			=	megaphone.cpp

OBJ			=	$(SRC:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re