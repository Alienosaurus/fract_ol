/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_keyboard.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:42:30 by adenece           #+#    #+#             */
/*   Updated: 2016/06/28 14:42:32 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int	event_keyboard_sub(int k, t_all *a)
{
	if (k == 13)
		a->ci += 0.001;
	else if (k == 1)
		a->ci -= 0.001;
	else if (k == 0)
		a->cr -= 0.001;
	else if (k == 2)
		a->cr += 0.001;
	else if (k == 6)
		--a->color_front;
	else if (k == 7)
		++a->color_front;
	else if (k == 8)
		a->color_front += 256;
	else if (k == 11)
		a->color_front -= 65536;
	else if (k == 45)
		a->color_front += 65536;
	else if (k == 37)
		a->lock = (a->lock) ? 0 : 1;
	return (update(a));
}

static int	event_keyboard_ex(int k, t_all *a)
{
	if (k == 12)
		a->zi -= 0.01;
	else if (k == 83)
		a->f = &mandelbrot;
	else if (k == 84)
		a->f = &julia;
	else if (k == 85)
		a->f = &mandelbar;
	else if (k == 86)
		a->f = &burning_ship;
	else if (k == 87)
		a->f = &rand_a;
	else if (k == 88)
		a->f = &rand_b;
	else if (k == 89)
		a->f = &rand_c;
	else if (k == 90)
		a->f = &rand_d;
	else if (k == 91)
		a->f = &rand_e;
	else if (k == 82)
		a->f = &rand_f;
	return (event_keyboard_sub(k, a));
}

int			event_keyboard(int k, t_all *a)
{
	if (k == 53)
		exit(0);
	else if (k == 34)
		a->i_max++;
	else if (k == 32)
		a->i_max--;
	else if (k == 31)
		reset(a);
	else if (k == 69)
		ft_zoom_in(0, 0, a);
	else if (k == 78)
		ft_zoom_out(0, 0, a);
	else if (k == 124)
		a->xx -= 100;
	else if (k == 123)
		a->xx -= -100;
	else if (k == 125)
		a->yy -= 100;
	else if (k == 126)
		a->yy -= -100;
	else if (k == 14)
		a->zi += 0.01;
	else
		return (event_keyboard_ex(k, a));
	return (update(a));
}
