# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    countfiles.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dranger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 13:22:34 by dranger           #+#    #+#              #
#    Updated: 2020/07/08 15:56:20 by dranger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#Find all files from the current directory that are either files or directories. If the last component of the path name contains a file extension with characters following the full stop, include that file. Prune will ensure that hidden files and folders are not included in the results. wc -l ensures that the number of files and not the path is returned in the result.
find $PWD \( -type f -or -type d \) -name ".*" -prune -o -print | wc -l
