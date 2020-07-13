/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:09:54 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 12:34:18 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_fibonacci(int index)
{
	if (index == 0)
    {
        return 0;
    }
	else if (index < 0)
    {
        return -1;
    }
    else
    {
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    }
}
