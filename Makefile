# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenece <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/28 14:38:29 by adenece           #+#    #+#              #
#    Updated: 2016/06/30 19:16:18 by adenece          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fract_ol

FLAGS		=	-Wall -Werror -Wextra

INCLUDES	=	-Iincludes -Ilibft

MLX			= 	-L/usr/local/lib/ -I/usr/local/include -lmlx -framework	\
				OpenGL -framework AppKit -lpthread

SRC			=	src/main.c	\
				src/display_screen.c	\
				src/draw_fractal.c	\
				src/event_keyboard.c	\
				src/event_mouse.c	\
				src/julia.c	\
				src/burning_ship.c \
				src/mandelbar.c	\
				src/mandelbrot.c \
				src/rand_a.c \
				src/rand_b_c_d_e_f.c \
				src/reset.c \
				src/update.c	\
				src/zoom.c	\

OBJ		= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	gcc $(FLAGS) -o $@  -c $< $(INCLUDES)

$(NAME): $(OBJ)
	make -C libft
	echo "Fract_ol @adenece"                                                            
	gcc -o $(NAME) $^ $(MLX) -Llibft/ -lft $(INCLUDES)

clean:
	rm -rf $(OBJ)
	make clean -C ./libft

fclean: clean
	rm -rf $(NAME)
	rm -rf $(OBJ)
	make fclean -C ./libft

make re: fclean all
