/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:34:12 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/13 08:43:42 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ui_bcl;

	ui_bcl = 0;
	while ((ui_bcl <= n) && (src[ui_bcl] != '\0'))
	{
		dest[ui_bcl] = src[ui_bcl];
		ui_bcl++;
	}
	if (ui_bcl < n)
	{
		while (ui_bcl < n)
		{
			dest[ui_bcl] = '\0';
			ui_bcl++;
		}
	}
	return (dest);
}
