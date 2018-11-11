/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:07:46 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:07:47 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	int i;

	i = 0;
	if (ac > 1)
		while (++i < ac)
		{
			while (*av[i])
				ft_putchar(*av[i]++);
			ft_putchar('\n');
		}
	return (0);
}
