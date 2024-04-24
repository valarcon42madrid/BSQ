/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:50:44 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:50:47 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	readtosalt(int salt, char *buff, int *cont);

void	ft_output(char **txt, int p, int cont, int salt)
{
	int		c_buff;
	char	*buff;
	char	*bbuff;

	c_buff = 200;
	buff = malloc(c_buff);
	while (salt < 2)
	{
		salt = readtosalt (salt, buff, &cont);
		if (cont >= c_buff && salt != 2)
		{
			bbuff = malloc(c_buff + 200);
			p = 0;
			while (p < c_buff)
			{
				bbuff[p] = buff[p];
				p++;
			}
			c_buff += 200;
			free(buff);
			buff = bbuff;
		}
	}
	buff[cont] = 0;
	*txt = buff;
}
