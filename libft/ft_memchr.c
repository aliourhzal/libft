/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:46:23 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/16 11:36:04 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)*ptr == (unsigned char)c)
			return ((void *)ptr);
		i++;
		ptr++;
	}
	return (0);
}
