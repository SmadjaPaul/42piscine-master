/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:07:40 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:07:42 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	while (--ac >= 1)
	{
		while (*av[ac])
			ft_putchar(*av[ac]++);
		ft_putchar('\n');
	}
	return (0);
}
