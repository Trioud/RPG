##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	main.c \
		marchand.c \
		ito.c \
		marchandises.c \
		buy_action.c \
		shelves.c \
		dialogues_options.c \

NAME	=	my_rpg

all: $(NAME)

$(NAME):
	gcc -g3 $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
clean:
	rm $(NAME)

fclean:
	rm $(NAME)

re: clean all
