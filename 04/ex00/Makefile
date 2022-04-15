NAME	= int

SRC		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongOne.cpp
INC		= Animal.hpp Cat.hpp Dog.hpp WrongOne.hpp
OBJ		= $(SRC:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

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
