/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:52:37 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 13:52:59 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_PARSER_H
# define FT_BSQ_PARSER_H

# include "types.h"
# include "io.h"
# include "ds.h"
# include "compress.h"

extern t_info	*bsq_validate_info(t_info *info);
extern t_info	*bsq_info_ctor(t_info *info, t_reader *reader);
extern int		bsq_read_first(t_reader *reader, t_info *info, t_lbuf **first,
					t_matrix *matrix);

#endif
