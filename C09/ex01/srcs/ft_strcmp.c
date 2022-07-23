/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:11:35 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/14 09:57:46 by nprevost         ###   ########lyon.fr   */
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
