/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:18:35 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:31:26 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	test;
	int	count;

	i = 0;
	test = 0;
	count = 0;
	while (tab[i] != 0)
	{
		test = f(tab[i]);
		if (test != 0)
			count++;
		i++;
	}
	return (count);
}
