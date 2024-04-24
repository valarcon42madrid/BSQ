/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:24:02 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:48 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_filesize(char *filename)
{
	int		f;
	char	buf[10];
	int		cont;
	int		readed;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		write(1, "map error", 9);
	}
	cont = 0;
	readed = 10;
	if (f < 0)
		return (0);
	while (readed != 0)
	{
		readed = read(f, buf, 10);
		if (readed > 0)
			cont += readed;
	}
	close(f);
	return (cont);
}
