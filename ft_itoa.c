/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:22:39 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/15 15:23:45 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char	*ft_int_max(void)
{
	int		i;
	char	*max_int;
	char	*str;

	max_int = "2147483648";
	i = 0;
	str = ft_calloc(12, sizeof(char));
	str[i] = '-';
	while (i < 11)
	{
		str[i +1] = max_int[i];
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		j;
	int		i;
	char	*str;

	j = -1;
	if (n == -2147483648)
		return (ft_int_max());
	str = ft_calloc(ft_find_size(n) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = ft_find_size(n) - 1;
	if (n < 0)
	{
		str[0] = '-';
		j += 1;
		n *= -1;
	}
	while (i > j)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}
