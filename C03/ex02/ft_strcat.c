/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:07:04 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/13 09:49:30 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	ui_bclsrc;
	unsigned int	ui_bcldest;

	ui_bclsrc = 0;
	ui_bcldest = 0;
	while (dest[ui_bcldest] != '\0')
		ui_bcldest++;
	while (src[ui_bclsrc] != '\0')
	{
		dest[ui_bcldest] = src[ui_bclsrc];
		ui_bcldest++;
		ui_bclsrc++;
	}
	dest[ui_bcldest] = '\0';
	return (dest);
}
