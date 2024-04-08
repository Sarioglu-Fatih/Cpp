NAME	=	convert

SRCS	=	main.cpp	\
			Type.cpp	\
			Convert.cpp

HEADER	=	Convert.hpp

CC	=	c++

FLAGS	=	-std=c++98 -Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	mkdir -p ./obj/
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	mv ./*.o ./obj/.

all		:	$(NAME) $(OBJS)

%.o		: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS) ./obj/

fclean	: clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re