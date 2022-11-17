/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:31 by rrask             #+#    #+#             */
/*   Updated: 2022/11/16 17:18:16 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (j < (size_t)ft_strlen(needle))
			{
				if (haystack[j + i] != needle[j])
					break ;
				if (j == (size_t)ft_strlen(needle) - 1)
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	str1 = "No rest for the wicked.";
	str2 = "rest";
	result = ft_strnstr(str1, str2, 24);
	printf("Needle occurs first at: %s\n", result);
	str2 = "ed";
	result = ft_strnstr(str1, str2, 24);
	printf("Needle occurs first at: %s\n", result);
	str2 = "dog";
	result = ft_strnstr(str1, str2, 24);
	printf("Needle occurs first at: %s\n", result);
}
