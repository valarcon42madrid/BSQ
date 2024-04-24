/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cuadradocabe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:25:55 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:44 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cuadradocabe(int maxl, int w, int lfil, int *tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < maxl)
	{
		while (y < maxl)
		{
			if (*(tab + w + y + (x * lfil) + x) == -1)
			{
				return (0);
			}
			else
				y++;
		}
		y = 0;
		x++;
	}
	return (maxl);
}
