/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:45:10 by hyeongki          #+#    #+#             */
/*   Updated: 2022/04/12 16:12:35 by hyeongki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(size * count);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size * count);
	return (ret);
}
