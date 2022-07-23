/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:08:02 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 12:58:25 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include"ft_stock_str.h"
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ret;
	int					i;

	i = 0;
	ret = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ret == 0)
		return (0);
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = malloc(sizeof(char) * (ret[i].size + 1));
		if (ret[i].copy == 0)
			return (0);
		ret[i].copy = ft_strcpy(ret[i].copy, av[i]);
		i++;
	}
	ret[i].size = 0;
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}
