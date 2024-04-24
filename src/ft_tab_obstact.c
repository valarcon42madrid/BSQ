/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_obstact.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:40:35 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:55 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_tab(int *tab, char *txt, char obs, char rell);
int		*ft_obstac(char *txt, int obs, char obst);
int		obs_calc(char *txt, int o);
int		ft_longcol(char *txt);
int		sizefil(char *txt);

int	ft_tab_obstact(char rov[3], char *txt, int c, int g)
{
	int	o;
	int	*tab;
	int	*obstac;

	obstac = ft_obstac(txt, obs_calc(txt, rov[1]), rov[1]);
	tab = malloc(sizeof(int) * (sizefil(txt) + 1) * (ft_longcol(txt) + 1) + 1);
	o = 0;
	while (o < (sizefil(txt) + 1) * (ft_longcol(txt) + 1) + 1)
	{
		tab[o] = 1;
		o++;
	}
	tab[(sizefil(txt) + 1) *(ft_longcol(txt) + 1) + 1] = 0;
	o = 0;
	while (obs_calc(txt, rov[1]) / 2 > o / 2)
	{
		c = obstac[o];
		g = obstac[o + 1];
		tab[c - g + g * (sizefil(txt) + 1)] = -1;
		o = o + 2;
	}
	free(obstac);
	ft_tab(tab, txt, rov[2], rov[0]);
	return (0);
}
