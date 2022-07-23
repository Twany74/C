/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprevost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:44:34 by nprevost          #+#    #+#             */
/*   Updated: 2022/07/22 13:04:55 by nprevost         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#define SIZE 4096

int	chk_errors(int args_nb, char **args)
{
	int	i;
	int	ret;

	i = 0;
	if (args_nb == 1)
	{
		write(2, "File name missing.", 18);
		return (-1);
	}
	if (args_nb > 2)
	{
		write(2, "Too many arguments.", 19);
		return (-1);
	}
	ret = open(args[1], O_RDONLY);
	if (ret == -1)
	{
		write(2, "Cannot read file.", 17);
		return (-1);
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	char	display[SIZE + 1];
	int		fd;
	int		i;

	i = 0;
	fd = chk_errors(argc, argv);
	read(fd, display, SIZE);
	while (display[i] != '\0')
	{
		write(1, &display[i], 1);
		i++;
	}
	return (0);
}
