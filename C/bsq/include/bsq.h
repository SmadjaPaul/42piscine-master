/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:52:20 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 13:53:01 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include "bsq/ds.h"
# include "bsq/io.h"
# include "bsq/parser.h"
# include "bsq/types.h"
# include "bsq/utils.h"
# include "bsq/compress.h"

extern void	bsq_square_check(t_info *info, t_u32 x, t_u32 y, t_u32 s);
t_bool		bsq_solve(t_reader *reader, t_info *info);

#endif
