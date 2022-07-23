/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:52:56 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/17 16:59:36 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	ret;

	ret = 0;
	if (nb > 0)
	{
		ret = nb;
		nb--;
		while (nb != 0)
		{
			ret = ret * nb;
			nb--;
		}
	}
	return (ret);
}
