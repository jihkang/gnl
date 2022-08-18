/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:40:12 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/18 16:32:07 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strldup(char *str, int r)
{
	int i;
	char	*temp;

	i = 0;
	temp = malloc(r + 1);
	if (temp == NULL)
		return (NULL);
	while (i < r)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

char	*ft_strlcat(char *dst, char *str, int r)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i])
		i++;
	if (dst == NULL)
		return (NULL);
	j = 0;
	while (j < r && str[j])
	{
		dst[i + j] = str[j];
		j++;
	}
	dst[i + j] = 0;
	return (dst);
}