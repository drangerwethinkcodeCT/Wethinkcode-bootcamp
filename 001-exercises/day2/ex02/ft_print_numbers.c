# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_numbers.c                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:31:05 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 16:38:37 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#include <unistd.h>
// initialize the functions:
void ft_print_numbers(void);
void ft_putchar(char c);

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_numbers()
{
    // Create a variable to start counting from 0.
    char c;
    c = '0';
    // Loop through the numbers starting from 0 through to nine.
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}
