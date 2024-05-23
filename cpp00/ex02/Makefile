# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 10:59:45 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/23 15:39:33 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
		
	
clean:
		@$(RM) $(OBJS)
		
fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re