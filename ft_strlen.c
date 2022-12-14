/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:02:53 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/11 09:52:52 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
