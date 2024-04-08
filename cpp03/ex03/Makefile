# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 16:26:07 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 19:53:05 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	claptrap

SRC =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\
		DiamondTrap.cpp	\

CC = c++
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
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