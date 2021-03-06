/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:36:29 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/04 17:43:33 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr;
	const char	*ptr2;
	size_t		i;

	ptr = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptr2[i])
			return ((unsigned char)ptr[i] - (unsigned char)ptr2[i]);
		i++;
	}
	return (0);
}
