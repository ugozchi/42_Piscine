# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 16:13:34 by uzanchi           #+#    #+#              #
#    Updated: 2024/04/02 16:13:36 by uzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIB		= libft.a
SRCDIR	= srcs
INCDIR	= includes

SRCS	=	${SRCDIR}/ft_putchar.c \
			${SRCDIR}/ft_swap.c \
			${SRCDIR}/ft_putstr.c \
			${SRCDIR}/ft_strlen.c \
			${SRCDIR}/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

all:	${LIB}

${LIB}:	${OBJS}
		ar rcs ${LIB} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${LIB}

re:		fclean all

.PHONY:	all clean fclean re
