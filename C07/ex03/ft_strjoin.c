/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:09:24 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 12:34:23 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

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

int	ft_chars(char **strs, char *sep, int size)
{
	unsigned int	chars;
	int				i;

	i = 0;
	chars = 0;
	while (i < size)
	{
		chars = chars + ft_strlen(strs[i]);
		if (i < size - 1)
			chars = chars + ft_strlen(sep);
		i++;
	}
	return (chars);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*ret;
	int				i;
	unsigned int	chars;

	i = 0;
	chars = 0;
	ret = "";
	if (size == 0)
		return (ret);
	chars = ft_chars(strs, sep, size);
	ret = malloc(sizeof(char) * chars + 1);
	i = 0;
	*ret = 0;
	while (i < size)
	{
		ret = ft_strcat(ret, strs[i]);
		if (i < size -1)
			ret = ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	char *cat;
	int	i;

	i = 0;
	cat = ft_strjoin(argc, argv, "__");
	while(cat[i] != '\0')
	{
		write(1, &cat[i], 1);
		i++;
	}
	return(0);
}
