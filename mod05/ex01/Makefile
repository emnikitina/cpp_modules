CC = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = Bureaucrat.cpp Form.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = form

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) Bureaucrat.hpp Form.hpp
	$(CC) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all