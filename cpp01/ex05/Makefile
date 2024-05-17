# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 13:58:45 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/17 13:59:47 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
		  @$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 	
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re