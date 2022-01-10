/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:33:21 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/08 16:21:28 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int c)
{
	const char	*p;
	int			i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
		{
			p = &str[i];
			return ((char *)p);
		}
		i--;
	}
	return (0);
}
