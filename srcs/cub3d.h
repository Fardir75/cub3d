/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:51:43 by eavilov           #+#    #+#             */
/*   Updated: 2022/12/21 14:04:14 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>
# include "defines.h"
# include "../my_libft/libft.h"
# include "../libx/minilibx_opengl_20191021/mlx.h"

typedef struct s_mlx_res
{
	int		res[2];
	int		center_x;
	int		center_y;
}	t_mlx_res;

typedef struct s_vector_2d
{
	int		x;
	int		y;
}	t_vector_2d;

typedef struct s_mouse_vars
{
	int		x;
	int		zone;
}	t_mouse_vars;

typedef struct s_vector_2f
{
	float			x;
	float			y;
	t_vector_2d		side_hit;
	double			length;
	float			perp_len;
	float			angle;
	int				hit;
}	t_vector_2f;

typedef struct s_color_rgb
{
	int	r;
	int	g;
	int	b;
}	t_color_rgb;

typedef struct s_texture_parsing
{
	char			*path_no;
	char			*path_so;
	char			*path_we;
	char			*path_ea;
}	t_texture_parsing;

typedef struct s_sol_plaf
{
	unsigned long	floor;
	unsigned long	ceilling;
}	t_sol_plaf;

typedef struct s_mlx_moves
{
	int			key[10];
	int			fingers;
	t_vector_2f	newdir;
}	t_mlx_moves;

typedef struct s_textures
{
	int		side;
	void	*image;
	char	*text_adr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
}	t_textures;

typedef struct s_data
{
	void	*image;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

typedef struct s_bresenham
{
	int		x1;
	int		y1;
	int		dx;
	int		dy;
	int		err;
	double	angle;
}	t_bresenham;

typedef struct s_square_tab
{
	int		tab[18][32];
	int		height;
	int		width;
	float	x;
	float	y;
}	t_square_tab;

typedef struct s_vector_d
{
	double	x;
	double	y;
}	t_vector_d;

typedef struct s_player
{
	t_vector_2f	pos;
	int			view_dst;
}	t_player;

typedef struct s_ray_data
{
	int		opposite;
	int		amount;
	double	gap;
}	t_ray_data;

typedef struct s_dda
{
	t_vector_2f	origin;
	t_vector_2f	map;
	t_vector_2d	step;
	t_vector_2f	limit;
	t_vector_2f	dir;
	t_vector_2f	side;
	t_vector_2f	delta;
}	t_dda;

typedef struct s_display_data
{
	t_vector_2d	tl;
	t_vector_2d	br;
	int			tex;
	double		step;
}	t_display_data;

typedef struct s_mlx_data
{
	void				*mlx;
	void				*win;
	void				*floor;
	double				angle;
	char				**map;
	char				direction;
	char				*paths[4];
	t_display_data		display;
	t_sol_plaf			sol_plaf;
	t_textures			textures[4];
	t_mouse_vars		mouse;
	t_dda				dda_val;
	t_mlx_res			res;
	t_mlx_moves			moves;
	t_data				img;
	t_ray_data			rays;
	t_bresenham			bres_val;
	t_square_tab		tableau;
	t_player			player;
	t_vector_2f			vector[1280];
	t_vector_2f			ray[1280];
}	t_mlx_data;

#endif
