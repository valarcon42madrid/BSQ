/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:15:42 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:42 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error1(char *copia, char rell, char obst, char vac)
{
	int	c;

	c = 4;
	if ((rell < 48 && rell > 57) || (obst < 48 && obst > 57))
	{
		write(1, "map error", 9);
		if (*(copia + c - 4) == rell || *(copia + c - 4) == vac
			|| *(copia + c - 4) == obst)
		{
			write(1, "map error", 9);
			return (0);
		}
	}
	return (1);
}
