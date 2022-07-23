/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:43:28 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:33:41 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int		ft_strcmp(char *str1, char *str2);
int		ft_atoi(char *str);
void	ft_add(int nb1, int nb2);
void	ft_sub(int nb1, int nb2);
void	ft_mod(int nb1, int nb2);
void	ft_div(int nb1, int nb2);
void	ft_mult(int nb1, int nb2);

int	chk_op(char *c)
{
	int	ret;

	ret = 1;
	ret = ft_strcmp(c, "+");
	if (ret == 0)
		return (0);
	ret = ft_strcmp(c, "-");
	if (ret == 0)
		return (1);
	ret = ft_strcmp(c, "%");
	if (ret == 0)
		return (2);
	ret = ft_strcmp(c, "/");
	if (ret == 0)
		return (3);
	ret = ft_strcmp(c, "*");
	if (ret == 0)
		return (4);
	return (-1);
}

int	ft_errors(int args_nb, char **args)
{
	int	op_num;

	op_num = -1;
	if (args_nb != 4)
		return (-1);
	op_num = chk_op(args[2]);
	if (op_num == -1)
	{
		write(1, "0", 1);
		return (-1);
	}
	return (op_num);
}

int	main(int argc, char **argv)
{
	int		op_num;
	int		num1;
	int		num2;
	void	(*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mod;
	f[3] = &ft_div;
	f[4] = &ft_mult;
	op_num = ft_errors(argc, argv);
	if (op_num == -1)
		return (1);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	f[op_num](num1, num2);
	return (0);
}
