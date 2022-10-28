/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:11:47 by rrask             #+#    #+#             */
/*   Updated: 2022/10/26 17:27:09 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d", isprint(0));
	printf("%d", ft_isprint(0));
	printf("%d", isprint(32));
	printf("%d", ft_isprint(32));
	printf("%d", isprint(126));
	printf("%d", ft_isprint(126));
	printf("%d", isprint(127));
	printf("%d", ft_isprint(127));
}
