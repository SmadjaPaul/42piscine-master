/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:12:11 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:12:26 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STRNSIZE(s) (s), (sizeof(s)-1)

static inline char	ft_isws(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static inline char	ft_tolower(char c)
{
	return (c >= 'A' && c <= 'Z' ? (char)(c + 'a' - 'A') : c);
}

static inline int	ft_strmatch(const char *s1, const char *s2)
{
	while (*s2 && ft_isws(*s2))
		++s2;
	while (*s1 && (ft_tolower(*s1) == ft_tolower(*s2)))
	{
		++s1;
		++s2;
	}
	return (ft_tolower(*s1) - ft_tolower(*s2));
}

static void			ft_spy(int argc, char **argv)
{
	while (--argc > 0)
		if (0 == ft_strmatch(argv[argc], "president")
			|| 0 == ft_strmatch(argv[argc], "attack")
			|| 0 == ft_strmatch(argv[argc], "powers"))
			write(1, STRNSIZE("Alert!!!\n"));
}

#ifndef FT_MAIN_WOOOW
# define FT_MAIN_WOOOW

int					main(int argc, char **argv)
{
	ft_spy(argc, argv);
	return (0);
}

#endif
