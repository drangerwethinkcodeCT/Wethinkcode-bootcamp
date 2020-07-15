/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:23:11 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 14:26:13 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
     int i;
     i = 0;

     while(str[i] != '\0')
     {
         if(str[i] >= 'A' && str[i] <= 'Z')
         {
             str[i] += 32;
         }
         i++;
     }

     return str;
}