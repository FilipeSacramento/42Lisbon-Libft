/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 22:54:40 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:45 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	if (!dest && !src)
		return (NULL);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	if (ptrdest <= ptrsrc)
	{
		return (ft_memcpy(dest, src, n));
	}
	while (n-- > 0)
	{
		*(ptrdest + n) = *(ptrsrc + n);
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	dest[] = "000";
// 	char	src[] = "111";
// 	size_t	n = 1;

// 	printf("%s\n%s\n%zu", dest, src, n);
// 	printf("\n\n%s", (char *)ft_memmove(dest, src, n));
// 	printf("\n%s", (char *)memmove(dest, src, n));
// }