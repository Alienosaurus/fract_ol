/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 14:43:09 by adenece           #+#    #+#             */
/*   Updated: 2016/06/30 19:13:17 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static void	usage(void)
{
	ft_putstr("<------>  Usage    <------>\n\n");
	ft_putstr(">.   1 : Mandelbrot\n");
	ft_putstr(">.   2 : Julia\n");
	ft_putstr(">.   3 : Mandelbar\n");
	ft_putstr(">.   4 : Burning ship\n");
	ft_putstr(">.   5 : Rand a\n");
	ft_putstr(">.   6 : Rand b\n");
	ft_putstr(">.   7 : Rand c\n");
	ft_putstr(">.   8 : Rand d\n");
	ft_putstr(">.   9 : Rand e\n");
	ft_putstr(">.   0 : Rand f\n");
	exit(EXIT_FAILURE);
}

static void	start(t_all *a, int v)
{
	if (v == 1)
		a->f = &mandelbrot;
	else if (v == 2)
		a->f = &julia;
	else if (v == 3)
		a->f = &mandelbar;
	else if (v == 4)
		a->f = &burning_ship;
	else if (v == 5)
		a->f = &rand_a;
	else if (v == 6)
		a->f = &rand_b;
	else if (v == 7)
		a->f = &rand_c;
	else if (v == 8)
		a->f = &rand_d;
	else if (v == 9)
		a->f = &rand_e;
	else if (v == 0)
		a->f = &rand_f;
	else
		usage();
}

static void	fractol(int v)
{
	t_all	a;

	start(&a, v);
	a.mlx = mlx_init();
	a.win = mlx_new_window(a.mlx, WIDTH, HEIGHT, TITLE);
	a.img = mlx_new_image(a.mlx, WIDTH, HEIGHT);
	a.tab = mlx_get_data_addr(a.img, &a.a, &a.b, &a.c);
	draw_fractal(&a);
	display_screen(&a);
}

int			main(int argc, char **argv)
{
	int		v;

	if (argc != 2)
		usage();
	if (!(v = ft_atoi(argv[1])))
		usage();
	fractol(v);
	return (0);
}
