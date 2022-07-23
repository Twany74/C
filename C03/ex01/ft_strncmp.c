/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:57:56 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/14 18:03:50 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i_loop;

	i_loop = 0;
	while ((s1[i_loop] != '\0') && (s2[i_loop] != '\0') && (i_loop < n - 1))
	{
		if (s1[i_loop] != s2[i_loop])
			return (s1[i_loop] - s2[i_loop]);
		i_loop++;
	}
	if (s1[i_loop] == s2[i_loop])
		return (0);
	else
		return (s1[i_loop] - s2[i_loop]);
}

int main(){
}
