/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:48:28 by rrask             #+#    #+#             */
/*   Updated: 2022/11/04 12:57:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	while (j + 1 > 0)
	{
		if (s[j] == (char)c)
            return ((char *)s + j);
        if (!*s)
            return  ((void *)0);
		j--;
	}
    return (0);
}

int	main(void)
{
	char *str1 = "Can you find the e here?";
	printf("The last occurence is here: %s", ft_strrchr(str1, 'h'));
	return (0);
}
