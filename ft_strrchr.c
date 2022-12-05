/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:48:28 by rrask             #+#    #+#             */
/*   Updated: 2022/12/05 10:52:32 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	if (!*s)
		return (NULL);
	j = ft_strlen(s);
	if (!j)
		return (NULL);
	while (j > 0 && s[j] != (char)c)
	{
		j--;
	}
	if (s[j] != c)
		return (NULL);
	return ((char *)&s[j]);
}

// int main(void)
// {
// 	char *src = "123456789";
// 	int c = 'A';
// 	char *res;

// 	res = ft_strrchr(src, c);
// 	printf("%s\n", res);
// 	return (0);
// }