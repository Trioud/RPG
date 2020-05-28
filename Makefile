##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	environement/hub/hub.c	\
		environement/hub/collisions_hub.c	\
		environement/hub/interaction_hub.c	\
		environement/dj_a/dj_a.c	\
		environement/dj_a/collisions_dja.c	\
		environement/dj_a/interaction_dja.c	\
		environement/dj_b/dj_b.c	\
		environement/dj_b/collisions_djb.c	\
		environement/dj_b/interaction_djb.c	\
		environement/dj_c/dj_c.c	\
		environement/dj_c/collisions_djc.c	\
		environement/dj_c/interaction_djc.c	\
		environement/define.c	\
		environement/define_other.c	\
		environement/deplacement.c	\
		environement/features_env.c	\
		environement/tools.c	\
		environement/file_env.c	\
		combat/src/combat.c	\
		combat/src/combat_define.c	\
		combat/src/create.c	\
		combat/src/create_txt.c	\
		combat/src/find.c	\
		combat/src/what.c	\
		combat/src/what_two.c	\
		combat/src/turn.c	\
		combat/src/boss_of.c	\
		combat/src/slime.c	\
		combat/src/slime_t.c	\
		combat/src/cb_life.c	\
		combat/src/crit_dodge.c	\
		src/my_strcat.c	\
		src/my_strlen.c	\
		src/my_getnbr.c	\
		src/ito.c \
		src/my_putstr.c	\
		src/itoca.c	\
		src/draw_a.c	\
		src/my_putchar.c \
		src/my_str_to_word_array.c	\
		loot_cb/victory.c	\
		lbs/slime_rdm_trois.c	\
		lbs/slime_rdm_two.c	\
		lbs/slime_rdm.c	\
		lbs/vdslm.c	\
		inv/inventory.c	\
		inv/inventory_other.c	\
		inv/defining.c	\
		inv/displaying.c	\
		quest/quest.c	\
		quest/main.c	\
		quest/menu.c	\
		htp/main.c	\
		lvlup/main.c	\
		Menu/*.c \
		Shop_items/*.c \

NAME	=	my_rpg

all: $(NAME)

$(NAME):
	gcc -g3 main.c $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
clean:
	rm $(NAME)

fclean:
	rm $(NAME)

re: clean all
