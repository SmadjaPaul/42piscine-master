/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:28:36 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:28:36 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		main(int ac, char **av)
{
	t_opts	opts;
	long	r;
	char	buff[BUFFS];

	if ((r = ft_tail_opts(&opts, ac, av)) != 0)
		return ((int)r);
	if (!opts.files)
		while ((r = read(0, buff, BUFFS)) != 0 && r != -1)
			;
	return (ft_tail(&opts));
}
