NAME	=	easyfind

SRC		=	main.cpp 		\

HEADER	=	easyfind.hpp	\

CC		=	c++

FLAG	=	-std=c++98 -Wall -Wextra -Werror

OBJ		=	$(SRC:.cpp=.o)

$(NAME)	:	$(OBJ)
	mkdir -p ./obj/
	$(CC) $(FLAG) $(SRC) -o $(NAME)
	mv ./*.o ./obj/.

all		:	$(NAME) $(OBJ)

%.o		:	%.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -o $@

clean	:
	rm -rf $(OBJ) ./obj/

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.phony	:	all clean fclean re