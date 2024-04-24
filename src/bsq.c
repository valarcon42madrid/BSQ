/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:45:20 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:57:12 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_main(char *filename);
int		ft_error(char *txt, int c);
void	ft_output(char **txt, int p, int cont, int salt);

int	main(int argc, char **argv)
{
	int		argcc;
	char	*txt;

	argcc = argc - 1;
	if (argcc == 0)
	{
		ft_output(&txt, 0, 0, 0);
		ft_error(txt, 0);
	}
	while (argcc > 0)
	{
		ft_main(argv[argc - argcc]);
		if (argc > 1)
			write(1, "\n", 1);
		argcc--;
	}
	return (0);
}
