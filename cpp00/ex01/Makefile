# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 16:16:05 by fsariogl          #+#    #+#              #
#    Updated: 2024/04/08 18:32:21 by fsariogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

SRCS			=	phonebook.cpp

INCS_DIR		=	phonebook.hpp

DEPS			=	$(INCS_DIR)/

INCLUDE			=	-I$(INCS_DIR)
FLAGS			=	-Wall -Wextra -Werror $(INCLUDE)

OBJS_DIR		=	objects/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

$(OBJS_DIR)%.o	:	$(SRCS_DIR)%.cpp $(INCS_DIR)
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME)			:	$(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all				:	$(NAME)

clean			:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean			:	clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re test
