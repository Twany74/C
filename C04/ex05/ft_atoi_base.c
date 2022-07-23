/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:48:57 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/15 13:55:24 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_error(char *b)
{
	int	i_loop;
	int	i_loop2;

	i_loop = 0;
	i_loop2 = 0;
	while (b[i_loop] != '\0')
	{
		if ((b[i_loop] == '+') || (b[i_loop] == '-'))
			return (0);
		if (b[i_loop] < 32)
			return (0);
		i_loop2 = 0;
		while (b[i_loop2] != '\0')
		{
			if ((b[i_loop] == b[i_loop2]) && (i_loop != i_loop2))
				return (0);
			i_loop2++;
		}
		i_loop++;
	}
	if (i_loop < 2)
		return (0);
	return (1);
}

int	ft_isspace(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_sign(int *loop, char *str)
{
	int	i_count;

	i_count = 0;
	while ((str[*loop] == '+') || (str[*loop] == '-'))
	{
		if (str[*loop] == '-')
			i_count++;
		*loop = *loop + 1;
	}
	if (i_count % 2 == 1)
	{
		return (-1);
	}
	else
		return (1);
}

int	ft_tobase10(int *loop, char *base, char *str)
{
	int	i_loop2;
	int	i_sign;
	int	i_base;
	int	nb;

	i_loop2 = 0;
	i_base = 0;
	i_sign = ft_sign(loop, str);
	while (base[i_base] != '\0')
		i_base++;
	nb = 0;
	while (str[*loop] != '\0')
	{
		i_loop2 = 0;
		while ((str[*loop] != base[i_loop2]) && base[i_loop2] != '\0')
			i_loop2++;
		if (base[i_loop2] == '\0')
			return (nb);
		else
			nb = (nb * i_base) + i_loop2;
		*loop = *loop + 1;
	}
	nb = nb * i_sign;
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i_testspace;
	int	i_loop;
	int	i_nb;

	i_loop = 0;
	i_testspace = 0;
	i_nb = 0;
	if (ft_error(base) == 0)
		return (0);
	i_testspace = ft_isspace(str[0]);
	while (i_testspace == 1)
	{
		i_loop++;
		i_testspace = ft_isspace(str[i_loop]);
	}
	i_nb = ft_tobase10(&i_loop, base, str);
	return (i_nb);
}
