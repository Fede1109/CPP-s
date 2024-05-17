# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 10:49:40 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/17 10:59:17 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Contact.cpp main.cpp PhoneBook.cpp


CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		 @$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
		@$(RM) $(OBJS)
fclean: clean
		@$(RM) $(NAME)
re:		fclean all

.PHONY: all clean fclean re