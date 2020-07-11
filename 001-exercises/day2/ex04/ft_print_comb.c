# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_comb.c                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:31:05 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 16:38:37 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char a, char b, char c);

void ft_putchar(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    write(1, ",", 1);
    write(1, " ", 1);
}

void ft_print_comb(){
    char a, b, c;
    a = '0';
    b = '1';
    c = '2';

   while(a <= '7')
   {
       while(b <= '8')
       {
           while(c <= '9')
           {
               ft_putchar(a, b, c);
               c++;
           }
           c = '0';
           b++;
       }
       b = '0';
       a++;
   }    
}
