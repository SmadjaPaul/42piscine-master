/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:52:25 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 13:53:00 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_UTILS_H
# define FT_BSQ_UTILS_H

# include "error.h"

# ifndef SUCCESS
#  define SUCCESS (0)
# endif

# ifndef FAILURE
#  define FAILURE (1)
# endif

# define UNUSED(x) ((void)(x))
# define MIN(a, b) ((a) < (b) ? (a) : (b))

#endif
