# Name and Compiler

NAME = Intern

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShruberryCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
	@find . -name "*.txt" -type f -delete
	@$(DEL)
fclean: clean
	@rm -rf $(NAME)

re: fclean all
