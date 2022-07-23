/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:03:33 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/12 13:07:36 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i_bcl;

	i_bcl = 0;
	if (str[i_bcl] == '\0')
		return (1);
	while (str[i_bcl] != '\0')
	{
		if ((str[i_bcl] < 'A') || (str[i_bcl] > 'Z'))
			if ((str[i_bcl] < 'a') || (str[i_bcl] > 'z'))
				return (0);
		i_bcl++;
	}
	return (1);
}
