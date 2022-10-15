/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:32:00 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/14 18:33:05 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_or_not(const char *haystack, const char *needle, int reset)
{
	while (*needle != '\0')
	{
		if (*needle == *haystack)
			reset = 1;
		else
		{
			reset = 0;
			break ;
		}
		haystack++;
		needle++;
	}
	return (reset);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	int		reset;

	i = 0;
	reset = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	if (n == 0)
		return (NULL);
	if (n == 1)
		n += 1;
	while (i < n - 1 && haystack[i] != '\0')
	{
		if (i + ft_strlen(needle) > n)
			return (NULL);
		if (haystack[i] == needle[0])
			reset = ft_word_or_not(&haystack[i], needle, reset);
		if (reset == 1)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
