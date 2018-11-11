/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:42:23 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:42:24 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

char		*ft_strlowcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (ft_isupper(*ptr))
			*ptr += 'a' - 'A';
		++ptr;
	}
	return (str);
}
