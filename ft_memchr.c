/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:29:57 by rrask             #+#    #+#             */
/*   Updated: 2022/11/07 15:43:50 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
    
void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *new_s;
	
	i = 0;
	new_s = (unsigned char *)s;
	while (new_s[i] != (unsigned char)c && n != 0)
	{
		n--;
		i++;
	}
	if (n == 0)
	{
		return (NULL);
	}
	return ((void *)&s[i]);
}
