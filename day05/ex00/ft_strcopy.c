/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:52:11 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 13:34:20 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{		
	int i;
	i = 0;
	
	while(src[i])
	{
		dest[i]	= src[i];
		i++;
	}

	return dest;	
}

