/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:15:25 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:15:25 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void			ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int					ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	int		c;

	if (tab && length > 0)
	{
		i = -1;
		c = 0;
		while (++i < length)
			if (!tab[i])
			{
				j = 1;
				while (i + j < length && !tab[i + j])
					++j;
				if (i + j < length)
				{
					++c;
					ft_swap(tab + i, tab + i + j);
				}
			}
			else
				++c;
		return (c);
	}
	return (length);
}
