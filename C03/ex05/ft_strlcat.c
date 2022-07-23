/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:14:58 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/14 09:59:53 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_catlen(unsigned int len, unsigned int d, unsigned int src)
{
	unsigned int	catlen;

	catlen = 0;
	if (len >= d)
		catlen = d + src;
	else
		catlen = src + len;
	return (catlen);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ui_bclsrc;
	unsigned int	ui_bcldest;
	unsigned int	ui_catlen;

	ui_bclsrc = 0;
	ui_bcldest = 0;
	while (dest[ui_bcldest] != '\0')
		ui_bcldest++;
	while (src[ui_bclsrc] != '\0')
		ui_bclsrc++;
	ui_catlen = ft_catlen(size, ui_bcldest, ui_bclsrc);
	ui_bclsrc = 0;
	if (size > ui_bcldest + 1)
	{
		size = size - ui_bcldest - 1;
		while ((src[ui_bclsrc] != '\0') && (ui_bclsrc < size))
		{
			dest[ui_bcldest] = src[ui_bclsrc];
			ui_bcldest++;
			ui_bclsrc++;
		}
	}
	dest[ui_bcldest] = '\0';
	return (ui_catlen);
}
