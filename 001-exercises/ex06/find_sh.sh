# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 10:59:58 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 11:09:56 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#List all items in this directory tree, search for only .sh files and then cut the .sh from the results.
ls -R |grep "\.sh$" | cut -f 1 -d '.'
