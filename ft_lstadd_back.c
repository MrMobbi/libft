/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:04:30 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/18 10:52:09 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*node;

	node = *lst;
	if (node == NULL)
		node->next = nw;
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = nw;
	}
}
