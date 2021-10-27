/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syolando <syolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:22:37 by syolando          #+#    #+#             */
/*   Updated: 2021/10/27 14:58:21 by syolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	ft_char_in_set(char chr, char const *set)
{
	int	ind;

	ind = 0;
	while (set[ind])
	{
		if (set[ind] == chr)
			return (1);
		ind++;
	}
	return (0);
}

static int	get_start_ind_trimmed(char const *str, char const *set)
{
	int	ind;

	ind = 0;
	while (str[ind] && ft_char_in_set(str[ind], set))
		ind++;
	return (ind);
}

static int	get_end_ind_trimmed(char const *str, char const *set)
{
	int	ind;

	ind = ft_strlen(str) - 1;
	while (str[ind] && ft_char_in_set(str[ind], set))
		ind--;
	return (ind);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s_i;
	int		e_i;
	char	*ans;
	int		size;

	s_i = get_start_ind_trimmed(s1, set);
	e_i = get_end_ind_trimmed(s1, set);
	size = e_i - s_i + 1;
	ans = ft_substr(s1, s_i, size);
	if (ans == NULL)
		return (NULL);
	return (ans);
}
