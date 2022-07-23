/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:36:55 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 09:38:48 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i_bcl;

	i_bcl = 0;
	while ((s1[i_bcl] != '\0') && (s2[i_bcl] != '\0'))
	{
		if (s1[i_bcl] != s2[i_bcl])
			return (s1[i_bcl] - s2[i_bcl]);
		i_bcl++;
	}
	if (s1[i_bcl] == s2[i_bcl])
		return (0);
	else
		return (s1[i_bcl] - s2[i_bcl]);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char*))
{
	int			i_move;
	int			i_bcl;
	char		*c_temp;

	i_move = 1;
	while (i_move == 1)
	{
		i_move = 0;
		i_bcl = 1;
		while (tab[i_bcl] != 0)
		{
			if (cmp(tab[i_bcl], tab[i_bcl + 1]) > 0)
			{
				c_temp = tab[i_bcl];
				tab[i_bcl] = tab[i_bcl + 1];
				tab[i_bcl + 1] = c_temp;
				i_move = 1;
			}
			i_bcl++;
		}
	}
}
