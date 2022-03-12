CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = FragTrap

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all
