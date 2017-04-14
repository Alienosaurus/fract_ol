/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_mouse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:42:38 by adenece           #+#    #+#             */
/*   Updated: 2016/06/29 13:47:56 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int					pos_mouse(int x, int y, t_all *a)
{
	static int		tx;
	static int		ty;

	if (a->lock == 0)
	{
		a->cr += ((x - (WIDTH / 2)) - (tx - (WIDTH / 2))) * 0.0001;
		a->ci -= ((y - (HEIGHT / 2)) - (tx - (HEIGHT / 2))) * 0.0001;
		tx = x;
		ty = y;
		return (update(a));
	}
	return (0);
}

int					mouse(int k, int x, int y, t_all *a)
{
	if (k == 1)
		ft_zoom_in(x, y, a);
	else if (k == 2)
		ft_zoom_out(x, y, a);
	else if (k == 5)
		ft_zoom_in(x, y, a);
	else if (k == 4)
		ft_zoom_out(x, y, a);
	else
		return (0);
	return (update(a));
}
