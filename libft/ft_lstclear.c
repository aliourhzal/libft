/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:42:37 by aourhzal          #+#    #+#             */
/*   Updated: 2021/11/17 18:42:39 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	if (lst || del)
	{
		while (temp != NULL)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = temp;
		}
	}
}
