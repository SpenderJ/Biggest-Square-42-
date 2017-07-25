/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 23:06:13 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/24 23:06:15 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_TYPES_H
# define FT_BSQ_TYPES_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# include "utils.h"

# define BUFF_SIZE (4096)
# define TRUE (1)
# define FALSE (0)

typedef unsigned int	t_u32;
typedef unsigned short	t_u16;
typedef unsigned char	t_u8;
typedef t_u8			t_bool;

typedef struct			s_bsq_info
{
	t_u8	empty;
	t_u8	obstacle;
	t_u8	square;
	t_u8	dummy;
	t_u32	height;
	t_u32	width;
}						t_bsq_info;

#endif
