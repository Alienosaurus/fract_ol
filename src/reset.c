/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:45:32 by adenece           #+#    #+#             */
/*   Updated: 2016/06/30 19:17:51 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	reset(t_all *a)
{
	a->lock = 0;
	a->i_max = 25;
	a->zoom = 100;
	a->xx = -(WIDTH / 2);
	a->yy = -(HEIGHT / 2);
	a->zi = 0;
	a->cr = 0.285;
	a->ci = 0.01;
	a->color_back = 0x0;
	a->color_front = 0xFFFF00;
}

/*int		update(t_all *a)
{
	mlx_clear_window(a->mlx, a->win);
	draw_fractal(a);
	return (0);
}*/
