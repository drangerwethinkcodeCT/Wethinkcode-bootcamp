/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:36:41 by dranger           #+#    #+#             */
/*   Updated: 2020/07/16 15:13:44 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c);
void ft_print_param(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}	

void ft_print_param(char *str)
{
	int count;
	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	count;
	count = 1;

	while (count < argc)
	{
		ft_print_param(argv[count]);
		count++;
	}

	return 0;

}
