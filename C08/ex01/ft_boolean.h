/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:14:12 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 12:47:21 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments\n"
# define ODD_MSG "I have an odd number of arguments\n"
# define SUCCESS 0
# define FALSE 0
# define TRUE 1
# define EVEN "even"
# include <stdio.h>

typedef int	t_bool;

int	even(int nb)
{
	if (nb % 2 == 0)
		return (1);
	return (0);
}
#endif
