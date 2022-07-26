/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:21:21 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/11 09:54:25 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i_bcl;

	i_bcl = 0;
	c = str[0];
	while (c != '\0')
	{
		write(1, &c, 1);
		i_bcl++;
		c = str[i_bcl];
	}
}
