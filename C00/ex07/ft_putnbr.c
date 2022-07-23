/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:09:12 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/09 14:44:17 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		inv_nb(int nb);

int	inv_nb(int nb)
{
	int	i_nbinv;

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

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nb = inv_nb(nb);
	while (nb != 0)
	{
		c_write = (nb % 10) + '0';
		write(1, &c_write, 1);
		nb = nb / 10;
	}
}
