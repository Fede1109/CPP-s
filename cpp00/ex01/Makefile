# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 10:49:40 by fdiaz-gu          #+#    #+#              #
#    Updated: 2024/05/23 15:39:22 by fdiaz-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Contact.cpp main.cpp PhoneBook.cpp


CXX = c++
RM = rm -rf
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		 @$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean: 
		@$(RM) $(OBJS)
fclean: clean
		@$(RM) $(NAME)
re:		fclean all

.PHONY: all clean fclean re