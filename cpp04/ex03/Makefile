NAME = amateria

SRCS = AMateria.cpp Cure.cpp Ice.cpp Character.cpp main.cpp MateriaSource.cpp 

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address -Wshadow
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