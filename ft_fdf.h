/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 08:08:41 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/27 09:39:48 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdio.h>
#include <stdlib.h>

typedef	struct				s_data
{
	void					*mlx_ptr;
	void					*mlx_win;
	char					*data;
}							t_data;
