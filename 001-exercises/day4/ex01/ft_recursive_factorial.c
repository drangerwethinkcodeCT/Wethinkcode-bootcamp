/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:37:59 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 10:36:06 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb)
{
    if(nb == 0)
    {
        return 1;
    } else if(nb < 0 || nb > 15)
    {
        return 0;
    } else {
        return nb * ft_recursive_factorial(nb - 1);
    }
}


