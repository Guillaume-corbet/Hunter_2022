##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## program
##

SRC	=	main.cpp		\
		Game.cpp		\
		Menu.cpp		\
		Settings.cpp	\
		Data.cpp

NAME	=	hunter

FLAGS	=	-W -Wall -Werror -Wextra

LIBS 	=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all:	$(NAME) 

$(NAME):
		g++ -o $(NAME) $(SRC) $(LIBS)

valgrind:
		g++ -o $(NAME) $(SRC) $(LIBS) -g3

warning:
		g++ -o $(NAME) $(SRC) $(FLAGS) $(LIBS) -g3

optimize:
		g++ -o $(NAME) $(SRC) $(LIBS) -O4

clean:
		rm -f $(NAME)

fclean:
		rm -f $(NAME)
		rm -f *~
		rm -f *#

re:		fclean all

reval:	fclean valgrind
