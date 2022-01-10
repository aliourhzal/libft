/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:27:06 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/12 19:27:11 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static int	power(int n, int power)
{
	int	ret;

	ret = 1;
	if (power == 0)
		return (1);
	while (power)
	{
		ret = ret * n;
		power--;
	}
	return (ret);
}

static void	convert(char *p, long int n, int len)
{
	int	i;
	int	chr;
	int	pw;

	i = 0;
	chr = 0;
	pw = power(10, len - 1);
	if (n < 0)
	{
		n *= -1;
		p[i] = '-';
		i++;
	}
	while (len)
	{
		chr = n / pw;
		p[i] = chr + 48;
		i++;
		n = n - (chr * pw);
		pw /= 10;
		len--;
	}
	p[i] = 0;
}

char	*ft_itoa(int n)
{
	char		*p;
	int			len;
	long int	nn;

	nn = n;
	len = intlen(nn);
	if (nn < 0)
		p = malloc(len * sizeof(char) + 2);
	else
		p = malloc(len * sizeof(char) + 1);
	if (p == NULL)
		return (0);
	convert(p, nn, len);
	return (p);
}
