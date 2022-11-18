/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:59:42 by rrask             #+#    #+#             */
/*   Updated: 2022/11/18 12:45:21 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	const char		*b;

	if (!n || dst == src)
		return (dst);
	a = dst;
	b = src;
	i = 0;
	while (n != 0)
	{
		a[i] = b[i];
		i++;
		n--;
	}
	return (dst);
}
