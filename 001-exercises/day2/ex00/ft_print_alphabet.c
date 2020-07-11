# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_alphabet.c                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:31:05 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 16:38:37 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#include <unistd.h>

void ft_print_alphabet(void);
void ft_putchar(char c);

void ft_putchar(char c){
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    alphabetCount;
    alphabetCount = 'a';
    while (alphabetCount <= 'z')
    {
       ft_putchar(alphabetCount);
       alphabetCount++;
    }
}
