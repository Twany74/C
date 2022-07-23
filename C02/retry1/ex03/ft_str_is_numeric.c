/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:23:28 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/12 13:11:56 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i_bcl;

	i_bcl = 0;
	if (str[i_bcl] == '\0')
		return (1);
	while (str[i_bcl] != '\0')
	{
		if ((str[i_bcl] < '0') || (str[i_bcl] > '9'))
			return (0);
		i_bcl++;
	}
	return (1);
}
