/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:25:02 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/06 12:33:34 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		ins;
	char	*news;

	ins = 0;
	if (s)
	{
		news = (char *)malloc(len * sizeof(char) + 1);
		if (news == NULL)
			return (0);
		while (start < ft_strlen(s) && len--)
		{
			news[ins] = s[start];
			ins++;
			start++;
		}
		news[ins] = 0;
		return (news);
	}
	return (0);
}
