/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pressing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:26:13 by eavilov           #+#    #+#             */
/*   Updated: 2022/11/24 23:30:32 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	key_press(int keycode, t_mlx_data *mlx_data)
{
	static int o = 0;
	fill_key_tab(mlx_data, keycode);
	init_angle(mlx_data);
	// if (keycode == LEFT_ARROW)
	// {
	//  	update_angle(mlx_data);
	// 	ft_rays(mlx_data);
	// }
	if (keycode == 53)
		mlx_close(mlx_data);
	return (1);
}

int	key_release(int keycode, t_mlx_data *mlx_data)
{
	empty_key_tab(mlx_data, keycode);
	return (0);
}

int	is_pressed(int	*keytab, int keycode)
{
	int	i;

	i = -1;
	while (++i < 10)
	{
		if (keytab[i] == keycode)
			return (1);
	}
	return (0);
}
