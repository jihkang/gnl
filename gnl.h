/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:36:22 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/18 16:32:10 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GNL_H
#define	GNL_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strldup(char *str, int size);
char	*ft_strlcat(char *dst, char *src, int size);
int	ft_strlen(char *str);
int	gnl(int fd, char **line);

#endif