/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:42:57 by adenece           #+#    #+#             */
/*   Updated: 2016/06/29 13:23:05 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		julia(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->zr = a->x / a->zoom + a->xx / a->zoom;
	a->zi = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr;
	fa_zi = a->zi * a->zi;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = fa_zr - fa_zi + a->cr;
		a->zi = 2 * a->zi * tmp + a->ci;
		fa_zr = a->zr * a->zr;
		fa_zi = a->zi * a->zi;
	}
	return (i);
}
