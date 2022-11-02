/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:52:59 by rrask             #+#    #+#             */
/*   Updated: 2022/11/02 17:48:52 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
		int i;
		char *a;
		const char *b;
		//Aaaaaaa

	if (src < dst)
	{
		ft_memcpy(dst, src, n);
	}
	else if (src > dst)
	{
		i = 0;
		a = dst;
		b = src;
		while (n != 0)
		{
			a[i] = b[i];
			i--;
			n--;
		}
	}
	return (dst);
}
