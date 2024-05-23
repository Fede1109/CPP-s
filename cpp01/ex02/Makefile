# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 12:38:34 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/23 15:43:56 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf


all : $(NAME)

$(NAME) : $(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			
clean: 
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)
		
re : fclean all

.PHONY: all clean fclean re