/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:53:09 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/06 11:19:10 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		lensrc;
	size_t		x;
	size_t		i;
	size_t		lendst;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	x = lendst;
	i = 0;
	if (dstsize == 0)
		return (lensrc);
	if (dstsize > lendst)
	{
		while (x < dstsize - 1 && src[i])
		{
			dst[x] = src[i];
			x++;
			i++;
		}
		dst[x] = 0;
		return (lendst + lensrc);
	}
	else
		return (dstsize + lensrc);
}
