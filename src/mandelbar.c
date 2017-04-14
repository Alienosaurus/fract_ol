/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:44:53 by adenece           #+#    #+#             */
/*   Updated: 2016/06/29 13:24:38 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		mandelbar(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->cr = a->x / a->zoom + a->xx / a->zoom;
	a->ci = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr * 2;
	fa_zi = a->zi * a->zi * 2;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = fa_zr - fa_zi - a->cr;
		a->zi = -2 * a->zi * tmp + a->ci;
		fa_zr = a->zr * a->zr;
		fa_zi = a->zi * a->zi;
	}
	return (i);
}
