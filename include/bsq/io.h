/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 23:05:36 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/24 23:05:37 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_IO_H
# define FT_BSQ_IO_H

# include "types.h"

# define BUFF_SIZE (4096)

typedef	struct	s_lbuff
{
	struct s_lbuff	*prev;
	struct s_lbuff	*next;
	t_uint32		*buff;
	t_uint16		size;
	t_uint16		cursor;
}				t_lbuff;

char			*bsq_getline(t_bsq *bsq, t_uint32 *size);
char			*bsq_fgetline(t_bsq *bsq, t_uint32 size);

int				bsq_read_infoline(t_bsq *bsq, t_lbuff *root);
t_uint32		*bsq_read_firstline(t_bsq *bsq, t_lbuff *root);
t_uint32		*bsq_read_line(t_bsq *bsq, t_uint32 *size);


#endif
