/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_screen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:42:12 by adenece           #+#    #+#             */
/*   Updated: 2016/06/29 13:24:00 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	display_screen(t_all *a)
{
	reset(a);
	update(a);
	mlx_mouse_hook(a->win, mouse, a);
	mlx_hook(a->win, 6, 1L << 6, pos_mouse, a);
	mlx_hook(a->win, 2, 1L << 1, event_keyboard, a);
	mlx_loop(a->mlx);
}
