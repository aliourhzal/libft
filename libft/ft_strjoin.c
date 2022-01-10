/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:28:54 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/06 14:47:58 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	int		inews;
	int		is;

	is = 0;
	inews = 0;
	if (s1 && s2)
	{
		news = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
		if (news == NULL)
			return (0);
		while (s1[is])
		{
			news[inews++] = s1[is++];
		}
		is = 0;
		while (s2[is])
		{
			news[inews++] = s2[is++];
		}
		news[inews] = 0;
		return (news);
	}
	return (0);
}
