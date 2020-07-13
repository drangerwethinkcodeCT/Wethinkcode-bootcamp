/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:00:11 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 12:10:18 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_power(int nb, int power)
{
if (power < 0 || (nb == 0 && power != 0))
    {
        return (0);
    }

if (power == 0)
    {
        return (1);
    }

if (power == 1)
    {
        return (nb);
    } else {
return (nb * ft_recursive_power(nb, power - 1));
    }
}
