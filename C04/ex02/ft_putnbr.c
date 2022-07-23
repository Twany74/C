/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:09:12 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/14 16:29:22 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	inv_nb(long nb)
{
	long	i_nbinv;

	i_nbinv = 0;
	while (nb != 0)
	{
		i_nbinv = i_nbinv * 10;
		i_nbinv = i_nbinv + (nb % 10);
		nb = nb / 10;
	}
	return (i_nbinv);
}

void	ft_putnbr(int nb)
{
	char	c_write;
	long	nbr;

	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb;
		nbr = -nbr;
	}
	else
		nbr = nb;
	nbr = inv_nb(nbr);
	while (nbr != 0)
	{
		c_write = (nbr % 10) + '0';
		write(1, &c_write, 1);
		nbr = nbr / 10;
	}
}
