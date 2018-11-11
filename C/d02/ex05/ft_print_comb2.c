/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:50:17 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 13:50:51 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((char)((i / 10) + '0'));
			ft_putchar((char)((i % 10) + '0'));
			ft_putchar(' ');
			ft_putchar((char)((j / 10) + '0'));
			ft_putchar((char)((j % 10) + '0'));
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
