/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:48:04 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/17 16:58:57 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	if (power < 0)
		return (0);
	ret = 1;
	while (power)
	{
		ret = ret * nb;
		power--;
	}
	return (ret);
}
