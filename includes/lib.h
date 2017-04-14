/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:47:55 by adenece           #+#    #+#             */
/*   Updated: 2016/06/30 18:57:21 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <math.h>
# include <pthread.h>
# include <stdlib.h>
# include "libft.h"
# include "mlx.h"
# define WIDTH 920
# define HEIGHT 880
# define TITLE "Fract'ol @adenece"

typedef struct	s_all
{
	int			a;
	int			b;
	int			c;
	void		*mlx;
	void		*win;
	int			(*f)(struct s_all*, int);
	int			i_max;
	int			lock;
	double		cr;
	double		ci;
	double		zr;
	double		zi;
	double		zoom;
	double		ox;
	double		oy;
	double		xx;
	double		yy;
	double		tmp_zi;
	int			x;
	int			y;
	int			color_back;
	int			color_front;
	void		*img;
	char		*tab;
}				t_all;

void			reset(t_all *a);
int				update(t_all *a);
int				mouse(int k, int x, int y, t_all *a);
int				pos_mouse(int x, int y, t_all *a);
int				event_keyboard(int k, t_all *a);
void			display_screen(t_all *a);
int				mandelbrot(t_all *a, int i);
int				julia(t_all *a, int i);
int				mandelbar(t_all *a, int i);
int				burning_ship(t_all *a, int i);
int				rand_a(t_all *a, int i);
int				rand_b(t_all *a, int i);
int				rand_c(t_all *a, int i);
int				rand_d(t_all *a, int i);
int				rand_e(t_all *a, int i);
int				rand_f(t_all *a, int i);
void			draw_fractal(t_all *a);
void			ft_zoom_in(int x, int y, t_all *a);
void			ft_zoom_out(int x, int y, t_all *a);

#endif
