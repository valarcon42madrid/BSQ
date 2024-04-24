/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:25:10 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:53 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_filesize(char *filename);

int	ft_readfile(char *filename, char **txt)
{
	int	size;
	int	f;
	int	count;
	int	readed;

	size = ft_filesize(filename);
	*txt = malloc(size + 1);
	f = open(filename, O_RDONLY);
	count = 0;
	while (count < size)
	{
		readed = read(f, (*txt) + count, size - count);
		if (readed > 0)
			count += readed;
	}
	(*txt)[size] = (char)0;
	close(f);
	return (size);
}
