/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syolando <syolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:20:54 by syolando          #+#    #+#             */
/*   Updated: 2021/11/10 17:56:11 by syolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	str_int(int n, char *int_as_chars)
{
	int			delim;
	int			ind;
	long		nn;

	nn = n;
	ind = 0;
	delim = 1000000000;
	if (nn < 0)
	{
		ind++;
		nn *= -1;
		int_as_chars[0] = '-';
	}
	while (!(nn / delim))
		delim /= 10;
	while (delim != 0)
	{
		int_as_chars[ind] = (nn / delim) % 10 + '0';
		delim /= 10;
		ind++;
	}
	int_as_chars[ind] = 0;
}

void	ft_putnbr_fd(int n, int fd)
{
	char		int_as_chars[12];

	if (n == 0)
		write(fd, "0", 1);
	else
	{
		str_int(n, int_as_chars);
		write(fd, int_as_chars, ft_strlen(int_as_chars));
	}
}
