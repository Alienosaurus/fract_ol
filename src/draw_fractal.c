/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:42:20 by adenece           #+#    #+#             */
/*   Updated: 2016/06/29 13:24:16 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static void		play_color(t_all *a, int k, int i)
{
	if (i == a->i_max)
	{
		a->tab[k] = a->color_back >> 0;
		a->tab[++k] = a->color_back >> 4;
		a->tab[++k] = a->color_back >> 10;
	}
	else
	{
		a->tab[k] = ((a->color_front / a->i_max) * i);
		a->tab[++k] = ((a->color_front / a->i_max) * i) >> 14;
		a->tab[++k] = ((a->color_front / a->i_max) * i) >> 8;
	}
}

void			draw_fractal(t_all *a)
{
	int			i;

	a->x = -1;
	a->tmp_zi = a->zi;
	while (++a->x < WIDTH)
	{
		a->y = -1;
		while (++a->y < HEIGHT)
		{
			i = -1;
			a->zr = 0;
			i = a->f(a, i);
			a->zi = a->tmp_zi;
			if (a->i_max > 0)
				play_color(a, (a->x * 4 + a->y * WIDTH * 4), i);
			else
				a->i_max = 1;
		}
	}
	mlx_put_image_to_window(a->mlx, a->win, a->img, 0, 0);
}
