CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = abstract_animal

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) Animal.hpp Cat.hpp Dog.hpp Brain.hpp 
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all