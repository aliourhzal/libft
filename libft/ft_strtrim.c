/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:16:30 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/16 11:35:16 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		len;
	int		j;

	i = 0;
	j = 0;
	if (s1)
	{
		len = ft_strlen(s1);
		while (ft_memchr(set, s1[i], ft_strlen(set)) && s1[i])
			i++;
		while (ft_memchr(set, s1[len - 1], ft_strlen(set)) && len > i)
			len--;
		p = ft_substr(s1, i, len - i);
		if (p == NULL)
			return (0);
		return (p);
	}
	return (0);
}
