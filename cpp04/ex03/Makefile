# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 14:14:30 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 19:59:18 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	amateria

SRC =	main.cpp				\
		srcs/AMateria.cpp		\
		srcs/Cure.cpp			\
		srcs/Ice.cpp			\
		srcs/Character.cpp		\
		srcs/MateriaSource.cpp	\


CC = c++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp	AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriSource.hpp
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