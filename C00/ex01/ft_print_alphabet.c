/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:16:25 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/06 17:41:17 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c_write;

	c_write = 'a';
	while (c_write <= 'z')
	{
		write(1, &c_write, 1);
		c_write = c_write + 1;
	}
}
