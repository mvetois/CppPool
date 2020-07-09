##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

D_SRC	 =	./
D_INC	=	./ex00/

lib		=

NAME	=	a

SRC	=	ex00/Banana.cpp \
		ex00/Fruit.cpp \
		ex00/FruitBox.cpp \
		ex00/Lemon.cpp

OBJ	=	$(SRC:.cpp=.o)
OBJ_MAIN = $(MAIN:.cpp=.o)

UNIT_TEST = --coverage -lcriterion
SRC_TEST = tests/one.cpp

OBJ_TEST = $(SRC_TEST:.cpp=.o)
NAME_TEST = unit_tests

CFLAGS	+=	-W -Wall -Wextra -g3 -I$(D_INC)

all	:	tests_run


$(NAME)	:	$(OBJ) $(OBJ_MAIN) libmy
		gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) $(CFLAGS)

clean	:
		rm -f $(OBJ)
		rm -f $(OBJ_MAIN)
		rm -f $(OBJ_TEST)
		rm -f $(lib)
		rm -f *.gcno
		rm -f *.gcda
		rm -f tests/*.gcda
		rm -f tests/*.gcno
		rm -f ex00/*.gcda
		rm -f ex00/*.gcno

fclean	:	clean
		rm -f $(NAME)
		rm -f $(NAME_TEST)
		rm -f $(D_LIB)*.a
		rm -f -r vgcore.*

re	:	clean all

tests_run : $(OBJ) $(OBJ_TEST)
		g++ -o $(NAME_TEST) $(OBJ) $(OBJ_TEST) $(UNIT_TEST) $(CFLAGS)
		./unit_tests
		gcovr --exclude tests/

.PHONY	:	all clean fclean re tests_run

.cpp.o:
	g++ -c -o $@ $< $(CFLAGS) $(UNIT_TEST)