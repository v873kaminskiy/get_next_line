/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:01:36 by vkaminsk          #+#    #+#             */
/*   Updated: 2017/01/15 16:34:35 by vkaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 32

typedef	struct		s_gnl
{
	int				fd;
	char			*str;
	struct s_gnl	*next;
	int				flag;
}					t_gnl;

int					get_next_line(int const fd, char **line);
#endif
