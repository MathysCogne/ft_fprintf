/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:32:51 by mcogne--          #+#    #+#             */
/*   Updated: 2024/12/31 23:24:31 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*arg;

	int fd, fd2;
	if (argc != 2)
		return (1);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	fd2 = 2;
	arg = "dwadawdawdwadawd\ndwadwadwa\n";
	printf("\nLen: %d\n", ft_fprintf(fd, "92d%s%%", arg));
	printf("\nLen: %d\n", ft_fprintf(fd2, "92d%s%%", arg));
	return (0);
}
