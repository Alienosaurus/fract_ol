/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand_b_c_d_e_f.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:45:24 by adenece           #+#    #+#             */
/*   Updated: 2016/06/29 13:25:34 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int			rand_b(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->cr = a->x / a->zoom + a->xx / a->zoom;
	a->ci = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr * a->zr;
	fa_zi = a->zi * a->zi * a->zi;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = fabs(fa_zr - fa_zi + a->cr);
		a->zi = tan(2 * a->zi * tmp) + a->ci;
		fa_zr = a->zr * a->zr * a->zi;
		fa_zi = a->zi * a->zi * a->zi;
	}
	return (i);
}

int			rand_c(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->cr = a->x / a->zoom + a->xx / a->zoom;
	a->ci = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr * a->zr;
	fa_zi = a->zi * a->zi * a->zi;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = fabs(fa_zr - fa_zi + a->cr);
		a->zi = tan(2 * a->zi * tmp) + a->ci;
		fa_zr = a->zr * a->zr * a->zi;
		fa_zi = a->zi * a->zi * a->zi;
	}
	return (i);
}

int			rand_d(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->cr = a->x / a->zoom + a->xx / a->zoom;
	a->ci = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr * a->zr;
	fa_zi = a->zi * a->zi * a->zi;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = fabs(fa_zr - fa_zi + a->cr);
		a->zi = 2 * a->zi * tmp + a->ci;
		fa_zr = a->zr * a->zr * a->zi;
		fa_zi = a->zi * a->zi * a->zi;
	}
	return (i);
}

int			rand_e(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->cr = a->x / a->zoom + a->xx / a->zoom;
	a->ci = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr * a->zr;
	fa_zi = a->zi * a->zi * a->zi;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = fa_zr - fa_zi + a->cr;
		a->zi = cos(tan(2 * a->zi * tmp) + a->ci);
		fa_zr = a->zr * a->zr * a->zi;
		fa_zi = a->zi * a->zi * a->zi;
	}
	return (i);
}

int			rand_f(t_all *a, int i)
{
	double	fa_zr;
	double	fa_zi;
	double	tmp;

	a->cr = a->x / a->zoom + a->xx / a->zoom;
	a->ci = a->y / a->zoom + a->yy / a->zoom;
	fa_zr = a->zr * a->zr * a->zr;
	fa_zi = a->zi * a->zi * a->zi;
	while ((fa_zr + fa_zi) < 4 && ++i < a->i_max)
	{
		tmp = a->zr;
		a->zr = tan(fa_zr - fa_zi + a->cr);
		a->zi = tan(2 * a->zi * tmp) + a->ci;
		fa_zr = a->zr * a->zr * a->zi;
		fa_zi = a->zi * a->zi * a->zi;
	}
	return (i);
}
