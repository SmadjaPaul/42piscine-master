/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:29:27 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:29:27 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		main(int ac, char **av)
{
	char		buff[BUFFS];
	long		rsize;
	unsigned	c;

	rsize = 0;
	if (ac < (int)((c = 0) + 2))
		return (ft_hexdump(0, buff, &rsize, &c));
	if (av[1][0] == '-' && av[1][1] == 'C' && !av[1][2])
	{
		++av;
		--ac;
	}
	return (ft_dump_all(buff, av + 1, ac - 1));
}
