/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:43:49 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/04 11:12:33 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t	len)
{
	size_t	i;
	size_t	tst;

	i = 0;
	tst = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] && tst + i < len)
	{
		while (haystack[i] == needle[i] && tst + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		i = 0;
		tst++;
	}
	return (0);
}
