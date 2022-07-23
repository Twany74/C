# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprevost <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 10:14:05 by nprevost          #+#    #+#              #
#    Updated: 2022/07/22 11:08:20 by nprevost         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_atoi.c ft_strcmp.c operations.c ft_putnbr.c

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
