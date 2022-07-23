/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:48:45 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/18 11:52:31 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_error(char *b);
int	ft_atoi_base(char *str, char *base);

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

void	ft_rev_char_tab(char *tab, int size)
{
	char	c_temp;
	int		i_bcl;
	int		i_rev;

	i_rev = size - 1;
	i_bcl = 0;
	while (i_bcl < (size / 2))
	{
		c_temp = tab[i_bcl];
		tab[i_bcl] = tab[i_rev];
		tab[i_rev] = c_temp;
		i_bcl++;
		i_rev--;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		i_base;
	int		i_bcl;
	long	i_temp;
	char	*c_nbr;

	i_temp = nbr;
	i_bcl = 0;
	i_base = 0;
	c_nbr = malloc(sizeof(char) * 35 + 1);
	while (base[i_base] != '\0')
		i_base++;
	if (nbr < 0)
	{
		i_temp = nbr;
		i_temp = -i_temp;
	}
	while (i_temp != 0)
	{
		c_nbr[i_bcl] = base[i_temp % i_base];
		i_temp = i_temp / i_base;
		i_bcl++;
	}
	if (nbr < 0)
		c_nbr[i_bcl] = '-';
	return (c_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_base10;
	char	*nb_conv;
	int		size;

	size = 0;
	if ((ft_error(base_from) == 0) || (ft_error(base_to) == 0))
		return (0);
	nb_base10 = ft_atoi_base(nbr, base_from);
	nb_conv = ft_putnbr_base(nb_base10, base_to);
	size = ft_strlen(nb_conv);
	ft_rev_char_tab(nb_conv, size);
	return (nb_conv);
}

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}
