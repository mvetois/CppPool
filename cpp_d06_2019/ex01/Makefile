##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

D_SRC  	 =	./
D_INC	=	./


NAME	=	my_convert_temp


SRC	=	$(wildcard ./*.cpp)
OBJ = $(SRC:.cpp=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -I$(D_INC)

all	:	$(NAME)


$(NAME)	:	$(OBJ)
			g++ -o $(NAME) $(OBJ) $(CFLAGS)

clean :
	rm -f $(OBJ)
	rm -f $(lib)

fclean	:	clean
	rm -f $(NAME)
	rm -f $(D_LIB)*.a

re	:	clean all

.PHONY	:	all clean fclean re
