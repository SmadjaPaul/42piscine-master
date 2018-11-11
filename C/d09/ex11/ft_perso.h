/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:15:36 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:15:37 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# ifdef SAVE_THE_WORLD
#  undef SAVE_THE_WORLD
# endif

# define SAVE_THE_WORLD 42

typedef struct s_perso	t_perso;

struct					s_perso
{
	char	*name;
	double	life;
	int		age;
	int		profession;
};

#endif
