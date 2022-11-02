/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:49:41 by rrask             #+#    #+#             */
/*   Updated: 2022/11/02 17:48:59 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t srcLen;

    i = 0;
    srcLen = ft_strlen(src);
    if (dstsize > (srcLen + 1))
        return (srcLen);
    if (dstsize <= (srcLen + 1))
    {
        while (src[i] != '\0' && i < (dstsize - 1) && (dstsize > 0))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcLen);
}
