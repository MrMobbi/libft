/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:24:10 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/14 19:22:33 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*cpy;
	unsigned int	i;

	i = 0;
	if (start > ft_strlen(str))
	{
		cpy = malloc(sizeof(char) * 1);
		if (!cpy)
			return (NULL);
		cpy[0] = '\0';
		return (cpy);
	}
	if (len > ft_strlen(str) - start)
		len = ft_strlen(str) - start;
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (i < len && str[start] != '\0')
	{
		cpy[i] = str[start];
		i++;
		start++;
	}
	cpy[i] = '\0';
	return (cpy);
}
