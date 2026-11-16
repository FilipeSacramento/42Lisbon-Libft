/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 21:42:02 by filigome          #+#    #+#             */
/*   Updated: 2026/11/04 23:17:30 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(long n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	nlen;
	long	num;

	num = n;
	nlen = ft_nlen(num);
	ptr = malloc(sizeof(char) * nlen + 1);
	if (!ptr)
		return (NULL);
	ptr[nlen] = '\0';
	if (num == 0)
		ptr[0] = '0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		ptr[--nlen] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	n = 0;

// 	printf("%i", n);
// 	printf("\n\n%s", ft_itoa(n));
// }