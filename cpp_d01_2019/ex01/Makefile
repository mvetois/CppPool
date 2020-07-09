##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

NAME	=	menger

SRC	=	menger.c \
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-std=gnu11 -Wall -Wextra

all	:
		gcc -o $(NAME) $(SRC) $(CFLAGS) -I./ -lm

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f vgcore.*

re	:	clean all

.PHONY	:	all clean fclean re
