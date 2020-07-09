##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

D_SRC	 =	./
D_INC	=	./ex04/

lib		=

NAME	=	a

SRC	=	ex04/ex04.cpp

OBJ	=	$(SRC:.cpp=.o)
OBJ_MAIN = $(MAIN:.cpp=.o)

UNIT_TEST = --coverage -lcriterion
SRC_TEST = tests/ex04_tests.cpp

OBJ_TEST = $(SRC_TEST:.cpp=.o)
NAME_TEST = unit_tests

CFLAGS	+=	-W -Wall -Wextra -g3 -I$(D_INC)

all	:	tests_run

clean	:
		rm -f $(OBJ)
		rm -f $(OBJ_MAIN)
		rm -f $(OBJ_TEST)
		rm -f $(lib)

fclean	:	clean
		rm -f $(NAME)
		rm -f $(NAME_TEST)
		rm -f $(D_LIB)*.a
		rm -f -r vgcore.*
		rm -f *.gcno
		rm -f *.gcda
		rm -f tests/*.gcda
		rm -f tests/*.gcno
		rm -f ex04/*.gcda
		rm -f ex04/*.gcno

re	:	clean all

tests_run : $(OBJ) $(OBJ_TEST)
		g++ -o $(NAME_TEST) $(OBJ) $(OBJ_TEST) $(UNIT_TEST) $(CFLAGS)
		./unit_tests
		gcovr --exclude tests/

.PHONY	:	all clean fclean re tests_run

.cpp.o:
	g++ -c -o $@ $< $(CFLAGS) $(UNIT_TEST)