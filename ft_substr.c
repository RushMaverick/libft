/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:18:51 by rrask             #+#    #+#             */
/*   Updated: 2022/11/23 15:20:33 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char	*substr;

	i = start;
	j = 0;
	substr = malloc(sizeof(char) * len + 1);
	if (!start && !s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (substr);
	if (!substr)
		return (NULL);
	while (len > 0 && s[i] != '\0')
	{
		substr[j] = s[i];
		i++;
		j++;
		len--;
	}
	substr[j] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *str = "01234";
// 	size_t size = 10;
// 	char *ret = ft_substr(str, 10, size);
// 	printf("%s\n", ret);
// 	return (0);
// }
// your substr does not work when start >= ft_strlen(s)
