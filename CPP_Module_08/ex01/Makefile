# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 23:56:52 by sachouam          #+#    #+#              #
#    Updated: 2022/01/23 18:04:13 by sachouam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	span
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

SRC			=	main.cpp \
				Span.cpp \

OBJ			=	$(SRC:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

run:
			make && ./$(NAME)

.PHONY:		all clean fclean re
