/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:21:11 by jgabelho          #+#    #+#             */
/*   Updated: 2019/01/16 10:33:51 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 32
# define MAX_FD 5000

int		get_next_line(const int fd, char **line);
#endif
