/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:26:07 by dranger           #+#    #+#             */
/*   Updated: 2020/07/15 14:28:12 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ascii_checker(char a)
{
	if (
            (a >= 48 && a <= 57)||
            (a >= 97 && a <= 122)||
            (a >= 65 && a <= 90)
   		)
		return 1;
		return 0;
}

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || !ascii_checker(str[i - 1]))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

