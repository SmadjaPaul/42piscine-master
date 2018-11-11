/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:10:24 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:10:24 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_putchar((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((char)(nb % 10 + '0'));
	}
}

static void	ft_print_words_tables(char **tab)
{
	char *sptr;

	while (*tab)
	{
		sptr = *tab;
		while (*sptr)
			ft_putchar(*sptr++);
		ft_putchar('\n');
		++tab;
	}
}

void		ft_show_tab(struct s_stock_par *par)
{
	t_stock_par	*param;
	char		*sptr;

	param = par;
	while (param->str)
	{
		sptr = param->str;
		while (*sptr)
			ft_putchar(*sptr++);
		ft_putchar('\n');
		ft_putnbr(param->size_param);
		ft_putchar('\n');
		ft_print_words_tables(param->tab);
		++param;
	}
}
