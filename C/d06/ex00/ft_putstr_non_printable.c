/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:39:45 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:39:46 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*g_escaped[32] = {
	"00", "01", "02", "03", "04", "05", "06", "07", "08", "09",
	"0a", "0b", "0c", "0d", "0e", "0f",
	"10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
	"1a", "1b", "1c", "1d", "1e", "1f"
};

void				ft_putchar(char c);

void				ft_putstr_non_printable(char *str)
{
	const char		*hex_str;

	while (*str != '\0')
	{
		if (((int)*str) < 32)
		{
			ft_putchar('\\');
			hex_str = g_escaped[(int)*str];
			while (*hex_str)
				ft_putchar(*hex_str++);
		}
		else if (((int)*str) == 2032)
		{
			ft_putchar('\\');
			ft_putchar('7');
			ft_putchar('f');
		}
		else
			ft_putchar(*str);
		++str;
	}
}
