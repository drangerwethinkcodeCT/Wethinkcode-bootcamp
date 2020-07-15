/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:33:47 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 14:40:22 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] <= 65 && str[i] >= 90)
		{
			return 0;
		} else {
			return 1;
		}
		i++;
	}
	return 1;
}
