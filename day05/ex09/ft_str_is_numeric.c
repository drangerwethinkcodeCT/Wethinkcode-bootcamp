/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:09:34 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 14:36:15 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] < 48 && str[i] > 57) 
		{
			return 1;
		} else {
			return 0;
		}
		i++;
	}
	return 1;	
}

