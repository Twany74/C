# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprevost <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 10:59:22 by nprevost          #+#    #+#              #
#    Updated: 2022/07/22 11:06:48 by nprevost         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
