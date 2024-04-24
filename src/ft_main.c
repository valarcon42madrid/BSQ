/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:44:48 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:50 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_readfile(char *filename, char **txt);
int	ft_error(char *txt, int g, int o, int c);

void	ft_main(char *filename)
{
	char	*txt;
	int		size;
	int		o;
	int		g;

	g = 0;
	o = 0;
	size = ft_readfile(filename, &txt);
	ft_error(txt, g, o, 0);
	free(txt);
}
