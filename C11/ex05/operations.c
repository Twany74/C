/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:52:36 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:35:16 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb);

void	ft_add(int nb1, int nb2)
{
	int	res;

	res = nb1 + nb2;
	ft_putnbr(res);
}

void	ft_sub(int nb1, int nb2)
{
	int	res;

	res = nb1 - nb2;
	ft_putnbr(res);
}

void	ft_mod(int nb1, int nb2)
{
	int	res;

	if (nb2 == 0)
	{
		write(1, "Stop : modulo by 0", 18);
		return ;
	}
	res = nb1 % nb2;
	ft_putnbr(res);
}

void	ft_div(int nb1, int nb2)
{
	int	res;

	if (nb2 == 0)
	{
		write(1, "Stop : division by 0", 20);
		return ;
	}
	res = nb1 / nb2;
	ft_putnbr(res);
}

void	ft_mult(int nb1, int nb2)
{
	int	res;

	res = nb1 * nb2;
	ft_putnbr(res);
}
