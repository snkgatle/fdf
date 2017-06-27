/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linealgo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 07:59:33 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/27 10:14:38 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

static	void	ft_mlx_init(t_data *data)
{
	if ((data->mlx_ptr = mlx_init()) != NULL)
		if (!(data->mlx_win = mlx_new_window(data->mlx_ptr, 700, 400, "Name")))
			exit(EXIT_SUCCESS);
}

static	void	ft_drawline(t_data *d, int x0, int y0, int x1, int y1)
{
	int 	dx;
	int 	dy;
	float	m;
	int		p;
	int		i;

	dx = x1 - x0;
	dy = y1 - y0;
	m = dy / dx;
	i = 0;
	if (m < 1)
	{
		mlx_pixel_put(d->mlx_ptr, d->mlx_win, x0, y0, 0xffffff);
		p = 2 * dy - dx;
		while (i < (dx - 1))
		{
			if (p < 0)
			{
				mlx_pixel_put(d->mlx_ptr, d->mlx_win, x0++, y0, 0xffffff);
				p = p + (2 * dy);
			}
			else
			{
				mlx_pixel_put(d->mlx_ptr, d->mlx_win, x0, y0++, 0xffffff);
				p = p + (2 * dy) - (2 * dx);
			}
			i++;
		}
	}
}

int		main(void)
{
	t_data mlx;

	ft_mlx_init(&mlx);
	ft_drawline(&mlx, 350, 200, 450, 250);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}
