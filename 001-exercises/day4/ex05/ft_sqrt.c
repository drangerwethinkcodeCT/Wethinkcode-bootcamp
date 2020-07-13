/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:40:51 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 12:55:36 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int square_root;
    square_root = 1;

    if(nb < 0)
    {
        return 0;
    }

    while(square_root < nb / square_root)
    {
        square_root++;
    }

    if(square_root * square_root == nb)
    {
        return square_root;
    }       
   	return 0;  
}
