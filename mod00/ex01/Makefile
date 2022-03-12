CLANG = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp phonebook.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = phonebook

%.o: %.cpp phonebook.hpp
	$(CLANG) $(FLAGS) -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all
