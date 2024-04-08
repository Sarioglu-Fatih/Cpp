# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 18:07:44 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 19:44:38 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fix

SRC =	main.cpp	\
		Fixed.cpp	\
		

CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Fixed.hpp
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