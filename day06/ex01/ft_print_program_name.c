/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:16:39 by dranger           #+#    #+#             */
/*   Updated: 2020/07/16 15:12:09 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_program_name(char *str);
void ft_putchar(char c);

void ft_print_program_name(char *str)
{
	int count;
	count  = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}	

int	main(int argc, char **argv)
{
	(void)argc;
	ft_print_program_name(argv[0]);
	return (0);
}
