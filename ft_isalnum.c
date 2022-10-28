/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:34:02 by rrask             #+#    #+#             */
/*   Updated: 2022/10/26 17:07:22 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(size_t c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else if ((c >= 48 && c <= 57))
	{
		return (2);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('2'));
	printf("%d", ft_isalnum('B'));
	printf("%d", ft_isalnum('!'));
	return (0);
}
