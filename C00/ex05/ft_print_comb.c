/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:11:18 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/10 12:37:00 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void);
void	ft_write(char c[]);

void	ft_write(char c[])
{
	write(1, &c[0], 1);
	write(1, &c[1], 1);
	write(1, &c[2], 1);
	if (c[0] != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	c_write[3];

	c_write[0] = '0';
	c_write[1] = '1';
	c_write[2] = '2';
	while (c_write[0] <= '7')
	{
		while ((c_write[0] < c_write[1]) && (c_write[1] <= '8'))
		{
			while ((c_write[1] < c_write[2]) && (c_write[2] <= '9'))
			{
				ft_write(c_write);
				c_write[2]++;
			}
			c_write[1]++;
			c_write[2] = c_write[1] + 1;
		}
		c_write[0]++;
		c_write[1] = c_write[0] + 1;
		c_write[2] = c_write[1] + 1;
	}
	write(1, "\n", 1);
}
