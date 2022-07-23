/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:18:15 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/13 09:54:14 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ui_bclsrc;
	unsigned int	ui_bcldest;

	ui_bclsrc = 0;
	ui_bcldest = 0;
	while (dest[ui_bcldest])
		ui_bcldest++;
	while ((src[ui_bclsrc] != '\0') && (ui_bclsrc < nb))
	{
		dest[ui_bcldest] = src[ui_bclsrc];
		ui_bcldest++;
		ui_bclsrc++;
	}
	dest[ui_bcldest] = '\0';
	return (dest);
}
