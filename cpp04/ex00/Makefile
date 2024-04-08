# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 17:12:48 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 19:54:34 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	animals

SRC =	main.cpp				\
		srcs/Animal.cpp			\
		srcs/Cat.cpp			\
		srcs/Dog.cpp			\
		srcs/WrongAnimal.cpp	\
		srcs/WrongCat.cpp		\


CC = c++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	mkdir -p ./obj/
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	mv ./*.o ./obj/.
	mv ./*/*.o ./obj/.

clean:
	rm -rf $(OBJ) ./obj/

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re