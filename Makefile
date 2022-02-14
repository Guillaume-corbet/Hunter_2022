##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## program
##

SRC	=	main.cpp		\
		Game.cpp

NAME	=	hunter

FLAGS	=	-W -Wall -Werror -Wextra 

all:	$(NAME) 

$(NAME):
		g++ -o $(NAME) $(SRC) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

valgrind:
		g++ -o $(NAME) $(SRC) -g3

warning:
		g++ -o $(NAME) $(SRC) $(FLAGS) -g3

optimize:
		g++ -o $(NAME) $(SRC) -O4

clean:
		rm -f $(NAME)

fclean:
		rm -f $(NAME)
		rm -f *~
		rm -f *#

re:		fclean all
