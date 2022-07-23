/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:29:56 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 12:55:42 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include"ft_stock_str.h"
#include<unistd.h>
#include<stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
