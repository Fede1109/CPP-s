# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefie                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 17:02:42 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/06/27 17:02:56 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRCS = Fixed.cpp main.cpp bsp.cpp Point.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
		  @$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean: 	
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re