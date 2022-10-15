/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:13:42 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/13 12:28:47 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_set_or_not(const char *s1, const char *set)
{
	while (*set != '\0')
	{
		if (*set == *s1)
			return (1);
		set++;
	}
	return (0);
}

int	ft_find_start(unsigned int i, const char *s1, const char *set)
{
	unsigned int	start;

	i = 0;
	start = 0;
	while (s1[i] != '\0')
	{
		if (ft_set_or_not(&s1[i], set) == 1)
			i++;
		else
			break ;
	}
	if (s1[i] != '\0')
		start = i;
	return (start);
}

int	ft_find_stop(unsigned int i, const char *s1, const char *set)
{
	unsigned int	stop;

	i = ft_strlen(s1) - 1;
	stop = 0;
	while (i > 0)
	{
		if (ft_set_or_not(&s1[i], set) == 1)
			i--;
		else
			break ;
	}
	if (i != 0)
		stop = i + 1;
	return (stop);
}

char	*ft_s1_empty(char *str_trim)
{
	str_trim = malloc(sizeof(char) * 1);
	if (!str_trim)
		return (NULL);
	str_trim[0] = '\0';
	return (str_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	stop;
	char			*str_trim;

	str_trim = NULL;
	if (s1[0] == '\0')
		return (ft_s1_empty(str_trim));
	i = 0;
	start = ft_find_start(i, s1, set);
	stop = ft_find_stop(i, s1, set);
	str_trim = malloc(sizeof(char) * (stop - start) + 1);
	if (!str_trim)
		return (NULL);
	i = 0;
	while (start < stop)
	{
		str_trim[i] = s1[start];
		start++;
		i++;
	}
	str_trim[i] = '\0';
	return (str_trim);
}
/*
int main(int ac, char **av)
{
	(void) ac;

	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);	
}
*/
