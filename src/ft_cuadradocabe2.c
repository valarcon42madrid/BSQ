/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cuadradocabe2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:23:49 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:43 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_cuadradocabe(int maxl, int w, int lfil, int *tab);
void	ft_pintacuadrado(int ref, int maxl, char *txt, char rell);
int		sizefil(char *txt);

void	ft_cuadradocabe2(char *txt, int *tab, char vac, char rell)
{
	int	g;
	int	o;
	int	ref;
	int	lfil;

	g = 0;
	o = 0;
	ref = 0;
	lfil = sizefil(txt);
	while (*(txt + g) != 0)
	{
		if (*(txt + g) == vac)
		{
			while (ft_cuadradocabe(o + 1, g, lfil, tab) != 0)
			{
				o++;
				ref = g;
			}
		}
		g++;
	}
	free(tab);
	ft_pintacuadrado(ref, o, txt, rell);
}
