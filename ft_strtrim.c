/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:53:03 by rrask             #+#    #+#             */
/*   Updated: 2022/11/24 12:00:58 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int end;
	int start;
	char *trimmed;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	end = ft_strlen(s1);
	start = 0;
	while (ft_strchr(set, (int)s1[start]))
		start++;
	while (ft_strchr(set, (int)s1[end]) && end > start)
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*res;

	str1 = "";
	str2 = " \n\t";
	res = ft_strtrim(str1, str2);
	printf("%s\n", res);
	return (0);
}
