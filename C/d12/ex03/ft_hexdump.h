/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:29:05 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:29:06 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BUFFS (16)
# define SNS(s) (s),(sizeof(s)-1)

unsigned	ft_strlen(const char *str);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
int			ft_strall(char *str, char c);
int			ft_dump_all(char *buff, char **files, int file_count);
int			ft_hexdump(int fd, char *buff, long *rs, unsigned *c);
int			ft_hexdump_line(char *line, int len, unsigned c);
int			ft_hexdump_errno(int err, char *file);
int			ft_putnbr_base16(int nbr, int n);

#endif
