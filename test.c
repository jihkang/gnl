/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:31:03 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/18 16:33:01 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include <stdio.h>
#include <stdlib.h>

/*	test for gnl */
int main()
{
	char *str;
	int	fd;
	
	str = "test";
	fd = open(str, O_RDONLY);
	if (fd < 0)
		printf("file open error\n");
	else
	{
		while (gnl(fd, &str))
		{
			printf("%s\n", str);
		}
		// printf("%s\n", str);
	}
}