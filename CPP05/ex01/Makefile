# Name and Compiler

NAME = Bureaucrat

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp

# Sources and Objects

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@$(COMPILER) $(FLAGS) -c -o $@ $<

# Messages

COMP = echo "Beureaucrat status: \033[1;32m[OK]\033[0m"

DEL = echo "Beureaucrat status: \033[1;31m[KO]\033[0m"

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
