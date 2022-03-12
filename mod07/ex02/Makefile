CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS =  main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = array

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) Array.hpp 
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all