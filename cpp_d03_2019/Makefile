##
## EPITECH PROJECT, 2018
## Makefile lib
## File description:
## Compilator for the lib
##

D_LIB	=	./
D_INC	=	./

NAME	=	libstring.a

FML	=	$(wildcard *.c)

OBJ	=	$(FML:.c=.o)

CFLAGS	+=	-I$(D_INC) -g

all	:	$(NAME)
		make clean

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
