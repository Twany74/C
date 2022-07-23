/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:42:22 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/12 13:49:53 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ui_bcl;
	unsigned int	ui_src_len;

	ui_bcl = 0;
	ui_src_len = 0;
	while (src[ui_src_len] != '\0')
		ui_src_len++;
	if (size != 0)
	{
		while ((ui_bcl < size - 1) && (src[ui_bcl] != '\0'))
		{
			dest[ui_bcl] = src[ui_bcl];
			ui_bcl++;
		}
	}
	dest[ui_bcl] = '\0';
	return (ui_src_len);
}
