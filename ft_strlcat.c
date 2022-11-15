/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:54:55 by rrask             #+#    #+#             */
/*   Updated: 2022/11/15 14:24:43 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == NULL || dst == NULL)
		return (0);
	while (i < dstsize)
	{
		if (i == (size_t)ft_strlen(dst))
		{
			while (j < dstsize)
			{
				if (j == (size_t)ft_strlen(src))
				{
					return ((size_t)dst);
				}
				dst[i] = src[j];
				i++;
				j++;
			}
		}
		i++;
	}
	return ((size_t)dst);
}
