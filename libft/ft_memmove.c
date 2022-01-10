/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:36:14 by tnamir            #+#    #+#             */
/*   Updated: 2021/11/13 20:24:06 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = src;
	d = dst;
	i = 0;
	if (dst != 0 || src != 0)
	{
		while (n > i)
		{
			if (d > s)
			{
				n--;
				d[n] = s[n];
			}
			else
			{
				d[i] = s[i];
				i++;
			}
		}
	}
	return (dst);
}
