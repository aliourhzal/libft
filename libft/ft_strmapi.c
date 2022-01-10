/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:38:18 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/16 13:19:06 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	i = 0;
	if (s)
	{
		p = malloc(ft_strlen(s) * sizeof(char) + 1);
		if (p == NULL)
			return (0);
		while (s[i])
		{
			p[i] = f(i, s[i]);
			i++;
		}
		p[i] = 0;
		return (p);
	}
	return (0);
}
