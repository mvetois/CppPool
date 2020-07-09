##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile
##

SRC_DIR	=	src/
INC_DIR	=	include/
DIS_DIR	=	src/Display/
MOD_DIR	=	src/Module/

NAME	=	GKrellM

CFLAGS	=	-g3 -Wall -Wextra -Werror -I $(INC_DIR)

LDFLAGS	=	-lsfml-system -lsfml-graphics -lsfml-window -lncurses

SRC	=	$(SRC_DIR)main.cpp	\
		$(SRC_DIR)Core.cpp	\
		$(MOD_DIR)Cpu.cpp	\
		$(MOD_DIR)DateTime.cpp	\
		$(MOD_DIR)HostnameUsername.cpp	\
		$(MOD_DIR)Memory.cpp	\
		$(MOD_DIR)Network.cpp	\
		$(MOD_DIR)Uptime.cpp	\
		$(MOD_DIR)Module.cpp	\
		$(MOD_DIR)MonitorCore.cpp	\
		$(MOD_DIR)SystemKernel.cpp	\
		$(DIS_DIR)Drawable.cpp	\
		$(DIS_DIR)Line.cpp	\
		$(DIS_DIR)Ncurses.cpp	\
		$(DIS_DIR)ProgressBar.cpp	\
		$(DIS_DIR)Sfml.cpp

OBJ	=	$(SRC:.cpp=.o)

RM	=	rm -f

all:	$(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
