/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:18:51 by rrask             #+#    #+#             */
/*   Updated: 2022/11/22 20:18:52 by rrask            ###   ########.fr       */
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
	if (start >= (unsigned int)ft_strlen(s))
		return (0);
	substr = malloc(sizeof(char) * len + 1);
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
