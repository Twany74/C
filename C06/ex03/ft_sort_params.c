/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:01:30 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/17 16:47:15 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

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

void	ft_sort_str_tab(char **tab, int size)
{
	int			i_move;
	int			i_bcl;
	char		*c_temp;

	i_move = 1;
	while (i_move == 1)
	{
		i_move = 0;
		i_bcl = 1;
		while (i_bcl < size)
		{
			if (ft_strcmp(tab[i_bcl], tab[i_bcl + 1]) > 0)
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

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**params;

	params = argv;
	ft_sort_str_tab(params, argc - 1);
	ft_print_params(argc, params);
	return (0);
}
