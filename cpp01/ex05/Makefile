# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 16:10:52 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 19:41:56 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Harl

SRC =	main.cpp	\
		Harl.cpp	\

CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Harl.hpp
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