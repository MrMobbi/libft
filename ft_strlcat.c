/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:34:39 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/11 13:57:57 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dstsize;

	i = 0;
	j = ft_strlen(dst);
	dstsize = ft_strlen(dst);
	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	while (i < (n - 1 - dstsize) && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstsize + ft_strlen(src));
}
