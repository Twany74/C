/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:20:48 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:31:59 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int(*f)(int, int))
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (i < lenght - 1)
	{
		cmp = f(tab[i], tab[i + 1]);
		if (cmp > 0)
			return (0);
		i++;
	}
	return (1);
}
