/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:28:08 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/13 09:58:25 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_search(unsigned int *fc, unsigned int *tof, char *str, char *to_find)
{
	int				i_firstocc;
	unsigned int	ui_bclstr;

	i_firstocc = 0;
	ui_bclstr = 0;
	while ((str[ui_bclstr] != '\0') && (to_find[*tof] != '\0'))
	{
		if (str[ui_bclstr] == to_find[*tof])
		{
			if (i_firstocc == 0)
			{
				*fc = ui_bclstr;
				i_firstocc = 1;
			}
			ui_bclstr++;
			*tof = *tof +1;
		}
		else
		{
			ui_bclstr++;
			*tof = 0;
			i_firstocc = 0;
		}
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	ui_firstchar;
	unsigned int	ui_to_find;

	ui_firstchar = 0;
	ui_to_find = 0;
	if (to_find[0] == '\0')
		return (str);
	ft_search(&ui_firstchar, &ui_to_find, str, to_find);
	if (to_find[ui_to_find] == '\0')
		return (&str[ui_firstchar]);
	return (0);
}

int main(void){
    return 0;
}
