/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:47:59 by dranger           #+#    #+#             */
/*   Updated: 2020/07/16 11:59:20 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);
void ft_rev_params(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}	

void ft_rev_params(char *str)
{
	int length;
	length = 0;
	
	while(str[length] != '\0')
	{
		length++;
	}	

	while (length != 0)
	{
		ft_putchar(str[length]);
		length--;
	}
}

int	main(int argc, char **argv)
{
	int	count;
	count = 1;

	while (count < argc)
	{
		ft_rev_params(argv[count]);
		count++;
	}

	return 0;

}
