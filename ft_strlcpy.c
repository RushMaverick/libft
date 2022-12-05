/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:49:41 by rrask             #+#    #+#             */
/*   Updated: 2022/12/04 17:22:05 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize - 1 > (srclen + 1))
		return (srclen);
	if (dstsize <= (srclen + 1))
	{
		while (i < (dstsize - 1) && (dstsize > 0))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

    //  strlcpy() and strlcat() take the full size of the destination buffer and
    //  guarantee NUL-termination if there is room.  Note that room for the NUL
    //  should be included in dstsize.  Also note that strlcpy() and strlcat()
    //  only operate on true ''C'' strings. This means that for strlcpy() src
    //  must be NUL-terminated and for strlcat() both src and dst() must be NUL-
    //  terminated.

    //  strlcpy() copies up to dstsize - 1 characters from the string src to dst,
    //  NUL-terminating the result if dstsize is not 0.

// int main(void)
// {
// 	char *str = "";
// 	size_t res;
// 	size_t res2;
// 	char buff1[0xF00];
// 	char buff2[0xF00];

// 	ft_memset(buff1, 'A', 20);
// 	ft_memset(buff2, 'A', 20);

// 	res = ft_strlcpy(buff1, str, 0);
// 	res2 = strlcpy(buff2, str, 0);
// 	printf("Mine: %zu\n", res);
// 	printf("Original: %zu\n", res2);
// 	return (0);
// }