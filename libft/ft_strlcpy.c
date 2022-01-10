/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:22:57 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/03 11:33:08 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && dstsize - 1 != 0)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
