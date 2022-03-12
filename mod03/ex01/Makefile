CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = ScavTrap

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) ClapTrap.hpp ScavTrap.hpp
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all
