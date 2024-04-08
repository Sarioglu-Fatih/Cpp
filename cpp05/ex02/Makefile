# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 11:31:44 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 20:02:51 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	bureaucrat

SRC =	main.cpp					\
		Form.cpp					\
		Bureaucrat.cpp				\
		RobotomyRequestForm.cpp		\
		ShrubberyCreationForm.cpp	\
		PresidentialPardonForm.cpp	\


CC = c++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	mkdir -p ./obj/
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	mv ./*.o ./obj/.

clean:
	rm -rf $(OBJ) ./obj/

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re