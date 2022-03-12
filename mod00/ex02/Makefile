CLANG = clang++
FLAGS = -std=c++98 -Wall -Wextra -Werror 
SRCS = Account.cpp tests.cpp

OBJ = $(SRCS:.cpp=.o)
RM = rm -f
NAME = account

%.o: %.cpp Account.hpp
	$(CLANG) $(FLAGS) -c $<

$(NAME): $(OBJ)
	$(CLANG) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all
