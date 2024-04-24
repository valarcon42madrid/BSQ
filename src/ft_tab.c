/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:16:47 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:55 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_longcol(char *txt);
void	ft_cuadradocabe2(char *txt, int *tab, char vac, char rell);
int		sizefil(char *txt);

int	ft_tab(int *tab, char *txt, char vac, char rell)
{
	int	o;
	int	g;

	o = 1;
	g = 0;
	while (g < ft_longcol(txt))
	{
		tab[sizefil(txt) * o + g] = -1;
		o++;
		g++;
	}
	g = 0;
	while (g < sizefil(txt))
	{
		o = (sizefil(txt) + 1) * ft_longcol(txt);
		tab[o + g] = -1;
		g++;
	}
	tab[o + g] = -1;
	ft_cuadradocabe2(txt, tab, vac, rell);
	return (0);
}
