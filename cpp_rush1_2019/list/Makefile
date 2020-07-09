##
## EPITECH PROJECT, 2018
## epitech makefile
## File description:
## makefile
##

NAME	=	list

SRC	=	../new.c \
		../int.c \
		../float.c \
		../char.c \
		list.c \
		ex06.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-std=gnu11 -Wall -Wextra

all	:	$(NAME)

$(NAME)	:
		gcc -o $(NAME) $(SRC) $(CFLAGS) -I./

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f vgcore.*

re	:	fclean $(NAME)

.PHONY	:	all clean fclean re
