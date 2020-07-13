/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:13:15 by dranger           #+#    #+#             */
/*   Updated: 2020/07/13 15:15:32 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_find_next_prime(int nb)
{
   int i;
   i = 2;
   int is_prime;
   is_prime = 0;
   int prime_number;
   prime_number = nb + 1;
	
   while(i <= prime_number / i)
   {
       if(prime_number % i == 0)
       {
            is_prime++;
       }
       i++;
   }

   if(is_prime > 0)
   {
       ft_find_next_prime(prime_number);
   } else {
       printf("%d", prime_number);
   }
   return 0;
}
