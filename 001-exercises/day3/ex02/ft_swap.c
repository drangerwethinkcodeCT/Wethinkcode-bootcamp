/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:37:09 by dranger           #+#    #+#             */
/*   Updated: 2020/07/11 08:37:34 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int holder;
    holder = *a;
    *a = *b;
    *b = holder;
}

