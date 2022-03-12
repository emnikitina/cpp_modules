CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimals.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = animal

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) Animal.hpp Cat.hpp Dog.hpp WrongAnimals.hpp 
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all