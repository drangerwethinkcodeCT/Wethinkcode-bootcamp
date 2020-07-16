# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 08:47:44 by dranger           #+#    #+#              #
#    Updated: 2020/07/16 10:27:38 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c ft_putchar.c 
ar rc libft.a ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o

