# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 12:06:47 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 16:20:51 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#ifconfig will display the mac addresses. Filter for ether and then cut ether from results. 
ifconfig | grep ether | cut -c 8-
