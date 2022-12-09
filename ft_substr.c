/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:18:51 by rrask             #+#    #+#             */
/*   Updated: 2022/12/09 18:35:44 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// static int ft_min(int a, int b)
// {
	
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*substr;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	// len = ft_min(x?, len); //Create a function that takes the start of s1 minus len and return the value of the subtraction
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (len-- > 0 && s[i] != '\0')
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

int main(void)
{
	char * s = ft_substr("tripouille", 0, 5222020202020);
	printf("%d\n", strcmp(s, "tripouille"));
	free(s);
	return (0);
}
