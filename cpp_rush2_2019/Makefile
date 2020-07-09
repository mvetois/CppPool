##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

D_INC = ../

NAME = santa

SRC	=	src/Box.cpp \
		src/ConveyorBelt.cpp \
		src/Elf.cpp \
		src/GiftPaper.cpp \
		src/LittlePony.cpp \
		src/Object.cpp \
		src/PapaXmasConveyorBelt.cpp \
		src/PapaXmasElf.cpp \
		src/PapaXmasTable.cpp \
		src/Table.cpp \
		src/Teddy.cpp \
		src/Toy.cpp \
		src/UnitTest.cpp \
		src/Wrap.cpp \
		src/XmlWriter.cpp \
		src/XmlReader.cpp \
		src/TableRand.cpp \
		src/ConveyorBeltRand.cpp \
		src/SantaFactory.cpp \
		src/santa.cpp

SRC_BIS =	src/Box.cpp \
			src/ConveyorBelt.cpp \
			src/Elf.cpp \
			src/GiftPaper.cpp \
			src/LittlePony.cpp \
			src/Object.cpp \
			src/Table.cpp \
			src/Teddy.cpp \
			src/Toy.cpp \
			src/UnitTest.cpp \
			src/Wrap.cpp \
			src/XmlWriter.cpp \
			src/TableRand.cpp \
			src/ConveyorBeltRand.cpp \
			src/SantaFactory.cpp \
			src/mainFactory.cpp

NAME_BIS = santaFactory

SRC_MAIN = src/main.cpp

OBJ	=	$(SRC:.cpp=.o)
OBJ_MAIN	=	$(SRC_MAIN:.cpp=.o)

UNIT_TEST = --coverage -lcriterion

SRC_TEST = 	tests/UnitTest.cpp \
			tests/TestConvoyer.cpp \
			tests/TestTable.cpp \
			tests/TestReader.cpp \
			tests/TestFactory.cpp

OBJ_TEST = $(SRC_TEST:.cpp=.o)
NAME_TEST = unit_tests

CFLAGS	=	-W -Wall -Wextra -Werror -I$(D_INC)

all	:
		g++ -o $(NAME) $(SRC) $(SRC_MAIN) $(CFLAGS)
		g++ -o $(NAME_BIS) $(SRC_BIS) $(CFLAGS)

clean	:
		rm -f $(OBJ)
		rm -f $(OBJ_TEST)
		rm -f $(OBJ_MAIN)
		rm -f $(OBJ_BIS)
		rm -f $(OBJ_BIS_MAIN)
		rm -f *.gcno
		rm -f *.gcda
		rm -f tests/*.gcda
		rm -f tests/*.gcno
		rm -f src/*.gcda
		rm -f src/*.gcno

fclean	:	clean
		rm -f $(NAME)
		rm -f $(NAME_TEST)
		rm -f $(NAME_BIS)
		rm -f -r vgcore.*

re	:	clean all

tests_run : $(OBJ) $(OBJ_TEST)
		g++ -o $(NAME_TEST) $(OBJ) $(OBJ_TEST) $(UNIT_TEST) $(CFLAGS)
		./unit_tests
		gcovr --exclude tests/

.PHONY	:	all clean fclean re tests_run

.cpp.o:
	g++ -c -o $@ $< $(CFLAGS) $(UNIT_TEST)