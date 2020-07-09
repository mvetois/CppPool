##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

NAME	=	tests


SRC	=	../array.c \
		../char.c \
		../float.c \
		../int.c \
		../new.c \
		../player.c \
		../point.c \
		../vertex.c

MAIN =	src/main.c

OBJ	=	$(SRC:.c=.o)
OBJ_MAIN = $(MAIN:.c=.o)

UNIT_TEST = --coverage -lcriterion
SRC_TEST = 	fmain.c \
			exec.c	\
			test_char.c	\
			test_array.c	\
			test_int.c	\
			test_new.c	\
			test_float.c	\
			test_point.c	\
			test_vertex.c

OBJ_TEST = $(SRC_TEST:.c=.o)
NAME_TEST = unit_tests

CFLAGS	+=	-W -Wall -Wextra

all	:	$(NAME)
tests_run : $(NAME)

libmy	:
		make -C $(D_LIB)

clean	:
		rm -f $(OBJ)
		rm -f $(OBJ_MAIN)
		rm -f $(OBJ_TEST)

fclean	:	clean
		rm -f $(NAME_TEST)
		rm -f vgcore.*
		rm -f *.gcno
		rm -f *.gcda

re	:	clean all

$(NAME) :
		gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(UNIT_TEST) $(LDFLAGS) $(CFLAGS)
		./unit_tests
		gcovr --exclude tests/

.PHONY	:	all clean fclean re
