/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:36:05 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:36:06 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);
void			ft_list_push_back(t_list **begin_list, void *data);
void			ft_list_push_front(t_list **begin_list, void *data);
int				ft_list_size(t_list *begin_list);
t_list			*ft_list_last(t_list *begin_list);
t_list			*ft_list_push_params(int ac, char **av);
void			ft_list_clear(t_list **begin_list);
t_list			*ft_list_at(t_list *begin_list, unsigned int nbr);
void			ft_list_reverse(t_list **begin_list);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
				void *data_ref, int (*cmp)());

#endif
