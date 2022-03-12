CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = ABC.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = classes

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) ABC.hpp Base.hpp
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all