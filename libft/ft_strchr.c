/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:33:43 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/07 11:10:29 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	const char	*p;
	int			i;
	int			len;

	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (unsigned char)ch)
		{
			p = &str[i];
			return ((char *)p);
		}
		i++;
	}
	return (0);
}
