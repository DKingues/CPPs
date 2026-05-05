# Name and Compiler

NAME = easyfind

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

# Sources and Objects

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@$(COMPILER) $(FLAGS) -c -o $@ $<

# Messages

COMP = echo "EasyFind status: \033[1;32m[OK]\033[0m"

DEL = echo "EasyFind status: \033[1;31m[KO]\033[0m"

# Execution

all: $(NAME)
$(NAME): $(OBJ)
	@$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)
	@$(COMP)
clean:
	@rm -rf $(OBJ)
	@$(DEL)
fclean: clean
	@rm -rf $(NAME)

re: fclean all
