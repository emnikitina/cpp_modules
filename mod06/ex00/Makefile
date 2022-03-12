CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = Convert.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = convert

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) Convert.hpp 
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all