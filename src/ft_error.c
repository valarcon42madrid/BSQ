/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:10:33 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:57:16 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_errorgestor(char *rov, char *txt, char *copia);
int		ft_tab_obstact(char rov[3], char *txt, int c, int g);

int	ft_error(char *txt, int c)
{
	char	*copia;
	char	rov[3];

	copia = txt;
	txt++;
	while (*(copia + c) != 10)
	{
		txt++;
		c++;
	}
	*(copia + c) = '\0';
	rov[0] = *(copia + c - 1);
	rov[1] = *(copia + c - 2);
	rov[2] = *(copia + c - 3);
	if (ft_errorgestor(rov, txt, copia) == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_tab_obstact(rov, txt, c, 0);
	return (0);
}
