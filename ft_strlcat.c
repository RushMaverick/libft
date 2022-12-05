/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:54:55 by rrask             #+#    #+#             */
/*   Updated: 2022/12/05 14:31:58 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include "stdio.h"

// strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then
//      NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as
//      it means that either dstsize is incorrect or that dst is not a proper string).

//      If the src and dst strings overlap, the behavior is undefined.

// RETURN VALUES
//      Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some
//      systems), the following two are equivalent:

//            n = strlcpy(dst, src, len);
//            n = snprintf(dst, len, "%s", src);

//      Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create.  For
//      strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of src.

//      If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.

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

int main(void)
{
	char *dst;
	char *src;
	size_t res;
	size_t res2;

	dst = "";
	src = "CopyHELLO";
	res = ft_strlcat(dst, src, 10);
	res2 = strlcat(dst, src, 10);
	printf("Mine: %zu\n", res);
	printf("OG: %zu\n", res2);
	return (0);
}