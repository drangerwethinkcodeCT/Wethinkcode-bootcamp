/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:57:42 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 13:10:18 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_is_prime(int nb)
{
   int i;
   i = 2;
   int is_prime;
   is_prime = 0;
   if(nb < 2)
       return 0;
   while(i <= nb / i)
   {
       if(nb % i == 0)
       {
            is_prime++;
       }
       i++;
   }
   if(is_prime > 0)
   {
      return 0;
   } else {
      return 1; 
   }
   return 0;
}


