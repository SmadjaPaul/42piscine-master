/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:20:08 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:20:09 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H

# include "ft_dope.h"

static t_opp	g_opptab[] =
{
	{"+", ft_add},
	{"-", ft_sub},
	{"*", ft_mul},
	{"/", ft_div},
	{"%", ft_mod},
	{"", ft_usage}
};

#endif
