/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:25:56 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:41 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error2(char rell, char obst, char vac)
{
	if (rell == vac || vac == obst || obst == rell)
	{
		write(1, "map error", 9);
		return (0);
	}
	return (1);
}
