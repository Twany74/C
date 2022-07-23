/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:17:24 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/07 15:39:57 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	c_write;

	c_write = '0';
	while (c_write <= '9')
	{
		write(1, &c_write, 1);
		c_write = c_write + 1;
	}
}
