# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 15:45:47 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/07 18:35:20 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCSDIR		= .

SRCS		= megaphone.cpp

CC			= c++
CFLAGS		= -Wall -Wextra -Werror --std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test
