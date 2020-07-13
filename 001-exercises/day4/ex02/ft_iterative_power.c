/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:58:46 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 10:48:17 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int result;
	result = 1;

	if (power < 0 || (nb == 0 && power != 0))
    {
        return (0);
    }

	if (power == 0)
    {
        return (1);
    }

	while (power > 0)
	{
		result = result * nb;
		power--;
	}

	return (result);
}
