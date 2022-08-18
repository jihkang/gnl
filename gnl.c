/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:37:02 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/18 16:33:41 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

int	split_line(char *str, char **line)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	*line = ft_strldup(str, i);
	i++;
	return (i);
}

int	saved_total_line(int fd, char **str)
{
	char	buf[256];
	int	r;

	r = read(fd, buf, 256);
	*str = ft_strldup(buf, r);
	while (r)
	{
		r = read(fd, buf, 5);
		if (r <= 0)
			break ;
		buf[r] = 0;
		*str = ft_strlcat(*str, buf, r);
	}
	return (0);
}

int	gnl(int fd, char **line)
{
	static char	*saved;
	static int	moved;

	if (fd < 0 || fd > 65536)
		return (-1);
	if (saved == NULL)
	{
		saved_total_line(fd, &saved);
	}
	if (moved > ft_strlen(saved))
	{
		free(saved);
		saved = NULL;
		return (0);
	}
	moved += split_line(saved + moved, line);
	return (1);
}
