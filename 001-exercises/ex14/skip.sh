# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:31:05 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 14:03:45 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#awk will make sure only odd lines is printed. The number to the left of the == operator is for the line count while the 1 is the line where the list starts printing from.
ls -1 | awk 'NR % 2 == 1'
