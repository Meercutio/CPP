NAME	= int

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp
INC		= ClapTrap.hpp ScavTrap.hpp
OBJ		= $(SRC:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Werror -Wextra -g -std=c++98

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(INC) Makefile
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
