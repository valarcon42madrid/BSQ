/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtosalt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:52:49 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:54 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	readtosalt(int salt, char *buff, int *cont)
{
	read(0, (buff + *cont), 1);
	if (*(buff + *cont) == '\n')
		salt++;
	else
		salt = 0;
	if (salt != 2)
		*cont = *cont + 1;
	return (salt);
}
