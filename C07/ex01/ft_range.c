/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:57:12 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/18 11:50:08 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	unsigned int	size;
	int				i;
	int				*range;

	if (max < min)
		return (0);
	i = min;
	size = 0;
	while (i <= max)
	{
		i++;
		size++;
	}
	range = malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
