 
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    whoami.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:31:05 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 16:38:37 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#Save the whoami command in the search variable 
search=`whoami`
#perform an ldap search inserting the whoami command into the search filter (use -x to use simple auth instead of SASL). Use grep to narrow down the return results to only show the designated name. Fincally, cut the dn: name key out of the results, starting from column 5 and ending in 999(a number that will safely cut the entire line). This should return only the value of the designated name. 
ldapsearch -x "(uid=$search)" | grep '^dn:' | cut -c5-999
