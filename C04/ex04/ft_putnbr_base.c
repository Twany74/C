/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:41:36 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/14 14:10:37 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_error(char *b)
{
	int	i_loop;
	int	i_loop2;

	i_loop = 0;
	i_loop2 = 0;
	while (b[i_loop] != '\0')
	{
		if ((b[i_loop] == '+') || (b[i_loop] == '-'))
			return (0);
		if (b[i_loop] < 32)
			return (0);
		i_loop2 = 0;
		while (b[i_loop2] != '\0')
		{
			if ((b[i_loop] == b[i_loop2]) && (i_loop != i_loop2))
				return (0);
			i_loop2++;
		}
		i_loop++;
	}
	if (i_loop < 2)
		return (0);
	return (1);
}

void	ft_writenb(int bcl, int i_nbr, char *nbr)
{
	if (i_nbr < 0)
	{
		nbr[bcl] = '-';
		bcl++;
	}
	while (bcl > 0)
	{
		bcl--;
		write(1, &nbr[bcl], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i_base;
	int			i_bcl;
	long		i_temp;
	char		c_nbr[35];

	i_temp = nbr;
	i_bcl = 0;
	i_base = 0;
	if (ft_error(base))
	{
		while (base[i_base] != '\0')
			i_base++;
		if (nbr < 0)
		{
			i_temp = nbr;
			i_temp = -i_temp;
		}
		while (i_temp != 0)
		{
			c_nbr[i_bcl] = base[i_temp % i_base];
			i_temp = i_temp / i_base;
			i_bcl++;
		}
		ft_writenb(i_bcl, nbr, c_nbr);
	}
}
