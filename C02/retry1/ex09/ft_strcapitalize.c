/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:46:49 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/13 09:17:46 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i_bcl;

	i_bcl = 0;
	while (str[i_bcl] != '\0')
	{
		if ((str[i_bcl] >= 'a') && (str[i_bcl] <= 'z'))
			if ((str[i_bcl - 1] < '0') || (str[i_bcl - 1] > '9'))
				if ((str[i_bcl - 1] < 'a') || (str[i_bcl - 1] > 'z'))
					if ((str[i_bcl - 1] < 'A') || (str[i_bcl - 1] > 'Z'))
						str[i_bcl] -= 32;
		if ((str[i_bcl] >= 'A') && (str[i_bcl] <= 'Z'))
		{
			if ((str[i_bcl - 1] >= '0') && (str[i_bcl - 1] <= '9'))
				str[i_bcl] += 32;
			else if ((str[i_bcl - 1] >= 'a') && (str[i_bcl - 1] <= 'z'))
				str[i_bcl] += 32;
			else if ((str[i_bcl - 1] >= 'A') && (str[i_bcl - 1] <= 'Z'))
				str[i_bcl] += 32;
		}
		i_bcl++;
	}
	return (str);
}
