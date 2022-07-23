/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:34:50 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/20 16:22:55 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	chk_sep(char c, char *seps)
{
	int	i;

	i = 0;
	while (seps[i] != '\0')
	{
		if (c == seps[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	count_elements(char *str, char *charset)
{
	int	i;
	int	elem;
	int	is_sep;

	i = 0;
	elem = 0;
	is_sep = 0;
	while (str[i] != '\0')
	{
		is_sep = chk_sep(str[i], charset);
		if (is_sep == 1)
			i++;
		else
		{
			while ((is_sep == 0) && (str[i] != '\0'))
			{
				i++;
				is_sep = chk_sep(str[i], charset);
			}
			elem++;
		}
	}
	return (elem);
}

void	split_elem(char **dest, char *str, char *charset, int *elem)
{
	int	i;
	int	j;
	int	is_sep;

	i = 0;
	while (str[i] != '\0')
	{
		is_sep = chk_sep(str[i], charset);
		if (is_sep == 1)
			i++;
		else
		{
			j = 0;
			while ((is_sep == 0) && (str[i] != '\0'))
			{
				dest[*elem][j] = str[i];
				i++;
				j++;
				dest[*elem][j] = '\0';
				is_sep = chk_sep(str[i], charset);
			}
			*elem = *elem + 1;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int				i;
	int				j;
	int				element_nb;
	unsigned int	size;
	char			**ret;

	i = 0;
	j = 0;
	element_nb = 0;
	size = ft_strlen(str);
	element_nb = count_elements(str, charset);
	ret = malloc((sizeof(char) * (size + 1)) * (element_nb + 1));
	while (i <= element_nb + 1)
	{
		ret[i] = malloc(sizeof(char) * (size));
		i++;
	}
	element_nb = 0;
	i = 0;
	split_elem(ret, str, charset, &element_nb);
	ret[element_nb] = 0;
	return (ret);
}
