/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:58:47 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 10:25:50 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int factors;
	int result;
	factors = 1;
	result = 1;

	if (nb < 0 || nb > 100)
	return (0);

	while (factors <= nb)
	{
	result *= factors;
	factors++;
	}
	
	return (result);
}


