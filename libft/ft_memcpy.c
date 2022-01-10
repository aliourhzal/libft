/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:25:48 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/08 13:48:58 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;
	size_t		i;

	i = 0;
	pdst = dst;
	psrc = src;
	if (dst != 0 || src != 0)
	{
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
