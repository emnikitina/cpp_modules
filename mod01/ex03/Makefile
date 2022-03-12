CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = violence

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all
