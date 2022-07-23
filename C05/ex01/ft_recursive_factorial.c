/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:07:41 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/17 16:59:15 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		if (nb != 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		else
			return (nb);
	}
	return (0);
}
