/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:48:02 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:44 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptrsrc;
	unsigned char		*ptrdest;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ptrsrc = (const unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = "0000000000";
// 	size_t n = 3;

// 	printf("%lu\n", sizeof(long));
// 	printf("%s\n%s\n%zu", dest, src, n);
// 	printf("\n\n%s", (char *)ft_memcpy(dest, src, n));
// 	printf("\n%s", (char *)memcpy(dest, src, n));
// }