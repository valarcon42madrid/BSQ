/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_obstac.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:42:30 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:42:32 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		sizefil(char *txt);

int	*ft_obstac(char *txt, int obs, char obst)
{
	int	o;
	int	g;
	int	*obstac2;
	int	lfil;

	o = 0;
	g = 0;
	lfil = sizefil(txt);
	obstac2 = malloc(sizeof(int) * obs);
	while (*(txt + g) != 0)
	{
		while (*(txt + g) != 10 && *(txt + g) != 0)
		{
			if (*(txt + g) == obst)
			{
				*(obstac2 + o) = g % lfil;
				o++;
				*(obstac2 + o) = g / lfil;
				o++;
			}
			g++;
		}
		g++;
	}
	return (obstac2);
}
