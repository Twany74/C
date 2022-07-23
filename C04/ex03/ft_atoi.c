/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 07:48:22 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/14 16:26:02 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	i_loop;
	int	i_testspace;
	int	i_nbr;
	int	i_sign;

	i_loop = 0;
	i_sign = 0;
	i_nbr = 0;
	i_testspace = ft_isspace(str[0]);
	while (i_testspace == 1)
	{
		i_loop++;
		i_testspace = ft_isspace(str[i_loop]);
	}
	i_sign = ft_sign(&i_loop, str);
	while ((str[i_loop] >= '0') && (str[i_loop] <= '9'))
	{
		i_nbr = (i_nbr * 10);
		i_nbr = i_nbr + (str[i_loop] - 48);
		i_loop++;
	}
	i_nbr = i_nbr * i_sign;
	return (i_nbr);
}
