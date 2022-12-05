/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:54:55 by rrask             #+#    #+#             */
/*   Updated: 2022/12/05 19:26:49 by rrask            ###   ########.fr       */
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

	dstlen = ft_strlen(dst);
	while (*src && dstlen < dstsize - 1)
	{
		dst[dstlen] = *src;
		src++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (dstlen);
}

int	main(void)
{
	char dst[6] = "Yup";
	char *src;
	size_t res;
	size_t res2;

	src = "Yup";
	res = ft_strlcat(dst, src, 6);
	res2 = strlcat(dst, src, 6);
	printf("Mine: %zu\n", res);
	printf("OG: %zu\n", res2);
	printf("Mine: %s\n", dst);
	printf("OG: %s\n", dst);
	return (0);
}