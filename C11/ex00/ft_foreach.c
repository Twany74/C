/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:55:32 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:29:16 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		f(tab[i]);
		i++;
	}
}
