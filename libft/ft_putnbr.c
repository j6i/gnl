/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:16:57 by jgabelho          #+#    #+#             */
/*   Updated: 2018/12/08 15:30:14 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	char *s;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n == 2147483647)
		write(1, "2147483647", 10);
	else if (n != -2147483648 && n != 2147483647)
	{
		s = ft_itoa(n);
		while (*s != '\0')
			write(1, &*s++, 1);
	}
}
