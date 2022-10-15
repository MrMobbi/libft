/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:08:47 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/11 15:52:54 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	reset;

	i = 0;
	j = 0;
	reset = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{	
			reset = 1;
			j = i;
		}
		i++;
	}
	if (reset == 1)
		return ((char *) &s[j]);
	if ((char) c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
