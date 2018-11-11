/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:58:27 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 13:59:14 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	char	*begin;
	char	*end;

	begin = str;
	end = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		ft_swap(begin, end);
		begin++;
		end--;
	}
	return (str);
}
