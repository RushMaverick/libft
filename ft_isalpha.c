/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:22:32 by rrask             #+#    #+#             */
/*   Updated: 2022/10/26 17:06:45 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_isalpha('t'));
	printf("%d", ft_isalpha('2'));
	printf("%d", ft_isalpha('B'));
	printf("%d", ft_isalpha('a'));
	return (0);
}
