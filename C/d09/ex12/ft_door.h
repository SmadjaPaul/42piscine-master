/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:15:28 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:15:28 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# ifdef TRUE
#  undef TRUE
# endif
# define TRUE (1)

# ifdef FALSE
#  undef FALSE
# endif
# define FALSE (0)

# ifdef OPEN
#  undef OPEN
# endif
# define OPEN (42)

# ifdef CLOSE
#  undef CLOSE
# endif
# define CLOSE (21)

typedef unsigned char	t_bool;
typedef struct s_door	t_door;
struct					s_door
{
	int state;
};

void					open_door(t_door *door);
void					close_door(t_door *door);
t_bool					is_door_open(t_door *door);
t_bool					is_door_close(t_door *door);

#endif
