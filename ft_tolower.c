/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:38:03 by rrask             #+#    #+#             */
/*   Updated: 2022/11/04 10:39:53 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    size_t  new_c;

    new_c = c;
    if  (new_c >= 65 || new_c <= 90)
    {
        new_c = new_c + 32;
    }
    return (new_c);
}

int main(void)
{
    printf("Letter is: %c", ft_tolower('B'));
    return (0);
}