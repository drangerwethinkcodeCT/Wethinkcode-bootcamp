# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:17:38 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 13:19:19 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


export FT_LINE1=12
export FT_LINE2=20   
cat /etc/passwd | \
    grep -v '\#' | \
    sed '1!n;d' | \
    cut -d':' -f1 | \
    rev | \
    sort -r | \
    awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | \
    paste -s -d"," - | \
    sed 's/,/, /g' | \
    sed 's/$/./' | \
    tr -d '\n'
