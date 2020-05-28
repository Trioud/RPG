##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	inventory.c	\
		main.c	\
		defining.c	\
		../src/my_putstr.c	\
		../src/itoca.c	\
		../src/my_putchar.c \
		my_str_to_word_array.c	\
		../src/my_strcat.c	\
		../src/my_strlen.c	\
		../src/my_getnbr.c	\

NAME	=	my_rpg

all: $(NAME)

$(NAME):
	gcc -g3 $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
clean:
	rm $(NAME)

fclean:
	rm $(NAME)

re: clean all
