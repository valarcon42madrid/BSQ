/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:28:54 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:41 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		sizefil(char *txt);
int		ft_longcol(char *txt);

int	ft_error3_2(int lcol, int saltos)
{
	saltos++;
	if (lcol != saltos)
	{
		write(1, "map error", 9);
		return (0);
	}
	return (1);
}

int	ft_error3(char *txt, char vac, char obst, int k)
{
	int	saltos;

	saltos = -1;
	while (txt[k] != 0)
	{
		if (*(txt + k) != vac && *(txt + k) != obst && *(txt + k) != 10)
		{
			write(1, "map error", 9);
			return (0);
		}
		else if (*(txt + k) == 10)
		{
			saltos++;
			if ((k - saltos) % (sizefil(txt)) != 0)
			{
				write(1, "map error", 9);
				return (0);
			}
		}
		k++;
	}
	if (ft_error3_2(ft_longcol(txt), saltos) == 0)
		return (0);
	return (1);
}
