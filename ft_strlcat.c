/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:54:55 by rrask             #+#    #+#             */
/*   Updated: 2022/12/06 15:59:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"

//
	// strlcat() appends string src to the end of dst.  It will append at most dstsize
// 	- strlen(dst) - 1 characters.  It will then
// //      NUL-terminate,
// 	unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as
//
	//      it means that either dstsize is incorrect or that dst is not a proper string).

// //      If the src and dst strings overlap, the behavior is undefined.

// // RETURN VALUES
//
	//      Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some
// //      systems), the following two are equivalent:

// //            n = strlcpy(dst, src, len);
// //            n = snprintf(dst, len, "%s", src);

// //      Like snprintf(3),
// 	the strlcpy() and strlcat() functions return the total length of the string they tried to create.  For
//
	//      strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of src.

// //      If the return value is >= dstsize,
// 	the output string has been truncated.  It is the caller's responsibility to handle this.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t i;
	
	i = 0;
	if (dstsize == 0)
		return ((size_t)ft_strlen((char *)src));
	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	while (*(src + i) != '\0' && dstsize > dstlen + 1 + i)
	{
		*(dst + dstlen + i) = *(src + i);
		i++;
	}
	*(dst + dstlen + i) = '\0';
	return (dstlen + srclen);
}


// [fail]: your strlcat does not work with basic input
// [fail]: your strlcat return value is false
// [crash]: your strlcat crush when null parameter is sent with a size of 0


// int	main(void)
// {
// 	// char *dst = NULL;
// 	// char *src;
// 	// size_t res;
// 	size_t res2;
// 	char b[0xF] = "nyan !";

// 	// res = ft_strlcat(((void *)0), b, 0);
// 	// src = NULL;
// 	// res = ft_strlcat(dst, src, 0);
// 	res2 = strlcat(((void *)0), b, 0);
// 	// printf("Mine: %zu\n", res);
// 	printf("OG: %zu\n", res2);
// 	// printf("Mine: %s\n", dst);
// 	// printf("OG: %s\n", dst);
// 	return (0);
// }