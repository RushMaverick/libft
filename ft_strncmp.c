/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:06 by rrask             #+#    #+#             */
/*   Updated: 2022/11/21 15:17:36 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
	{
		if (n == 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if ((unsigned char)s1[i] == '\0' && (unsigned char)s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		res1;
	int		res2;

	str1 = "abcdef";
	str2 = "abcdefghijklmnop";
	res1 = ft_strncmp(str1, str2, 6);
	res2 = strncmp(str1, str2, 6);
	printf("%d\n", res1);
	printf("%d\n", res2);
	return (0);
}