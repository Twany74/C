/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:07:34 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/18 11:50:24 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_size(int min, int max)
{
	unsigned int	size;
	int				i;

	size = 0;
	i = min;
	while (i < max)
	{
		i++;
		size++;
	}
	return (size);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	int				i;

	size = 0;
	if (max <= min)
	{
		range = 0;
		return (0);
	}
	size = ft_size(min, max);
	*range = malloc(sizeof(int) * size);
	if (range == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}
