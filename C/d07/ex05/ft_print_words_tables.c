/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:08:55 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:08:56 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
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
