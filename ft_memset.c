/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:39:51 by hyeongki          #+#    #+#             */
/*   Updated: 2022/03/09 21:58:42 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
	*(unsigned char *)(s + i) = (unsigned char)c;
	i++;
    }
    return (s);
}
