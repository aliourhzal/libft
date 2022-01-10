/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:25:47 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/08 12:55:52 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*i;
	int		x;

	i = b;
	x = 0;
	while (len)
	{
		i[x] = (unsigned char)c;
		x++;
		len--;
	}
	return (b);
}
