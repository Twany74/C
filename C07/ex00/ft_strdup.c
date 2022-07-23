/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:47:44 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/18 11:49:17 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	c;
	int		i_bcl;

	i_bcl = 0;
	c = str[0];
	while (c != '\0')
	{
		i_bcl++;
		c = str[i_bcl];
	}
	return (i_bcl);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*cpy;

	size = ft_strlen(src) + 1;
	cpy = malloc(sizeof(char) * size);
	if (cpy == 0)
		return (0);
	cpy = src;
	return (cpy);
}
