/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pintacuadrado.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:35:33 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:52 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		sizefil(char *txt);

void	ft_pintacuadrado(int ref, int maxl, char *txt, char rell)
{
	int	x;
	int	y;
	int	lfil;

	x = 0;
	y = 0;
	lfil = sizefil(txt);
	while (x < maxl)
	{
		while (y < maxl)
		{
			*(txt + ref + y + (x * lfil) + x) = rell;
			y++;
		}
		y = 0;
		x++;
	}
	ft_putstr(txt);
}
