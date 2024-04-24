/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:44:59 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:45:00 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error5(int obs, int lfil, int lcol)
{
	if (obs == lfil * lcol)
	{
		write(1, "map error", 9);
		return (0);
	}
	return (1);
}
