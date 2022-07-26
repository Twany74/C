/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:36:04 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/12 13:18:11 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i_bcl;

	i_bcl = 0;
	while (str[i_bcl] != '\0')
	{
		if ((str[i_bcl] >= 'a') && (str[i_bcl] <= 'z'))
				str[i_bcl] -= 32;
		i_bcl++;
	}
	return (str);
}
