/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:03:06 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:29:40 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_map(int	*tab, int lenght, int(*f)(int))
{
	int	i;
	int	*ret;

	i = 0;
	ret = malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
