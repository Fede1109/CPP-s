# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 10:59:45 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/17 12:09:18 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		
	
clean:
		@$(RM) $(OBJS)
		
fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re