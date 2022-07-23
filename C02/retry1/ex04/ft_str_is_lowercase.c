/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:28:11 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/12 20:21:39 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i_bcl;

	i_bcl = 0;
	if (str[i_bcl] == '\0')
		return (1);
	while (str[i_bcl] != '\0')
	{
		if ((str[i_bcl] < 'a') || (str[i_bcl] > 'z'))
			return (0);
		i_bcl++;
	}
	return (1);
}
