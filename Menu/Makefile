NAME	= rpg

CC	= gcc

RM	= rm -f

SRCS	= ./event.c \
	  ./init.c \
	  ./main.c \
	  ./vector_changes.c \
	  ./sprites.c \
	  ./intro.c \
	  ./intro_engine.c \
	  ./more_text.c \
	  ./interaction.c \
	  ./options.c \
	  ./character_select.c \
	  ./ito.c \
	  ./change_resol.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME):
	gcc -l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window -l csfml-network $(SRCS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
