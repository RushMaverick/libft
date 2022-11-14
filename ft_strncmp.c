/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:06 by rrask             #+#    #+#             */
/*   Updated: 2022/11/13 17:33:30 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((unsigned int)i);
	while (n != 0 && (unsigned int)s1[i] == (unsigned int)s2[i])
	{
		i++;
		n--;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}
