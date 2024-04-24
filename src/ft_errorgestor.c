/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorgestor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:50:58 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:50:59 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_error1(char *txt, char rell, char obst, char vac);
int		ft_error2(char rell, char obst, char vac);
int		ft_error3(char *txt, char vac, char obst, int lcol);
int		ft_error4(char obs);
int		ft_error5(int obs, int lfil, int lcol);
int		sizefil(char *txt);
int		ft_longcol(char *txt);
int		*ft_obstac(char *txt, int obs, char obst);
int		obs_calc(char *txt, int o);

int	ft_errorgestor(char *rov, char *txt, char *copia)
{
	if (ft_error1(copia, rov[0], rov[1], rov[2]) == 0)
		return (0);
	if (ft_error2(rov[0], rov[1], rov[2]) == 0)
		return (0);
	if (ft_error3(txt, rov[2], rov[1], ft_longcol(txt)) == 0)
		return (0);
	if (ft_error4(obs_calc(txt, rov[1])) == 0)
		return (0);
	if (ft_error5(obs_calc(txt, rov[1]) / 2,
			sizefil(txt), ft_longcol(txt)) == 0)
		return (0);
	return (1);
}
