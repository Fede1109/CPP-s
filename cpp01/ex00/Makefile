# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 15:41:50 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/23 15:42:51 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -rf
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(OBJS)
		@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re	: 	fclean all

.PHONY: all clean fclean re