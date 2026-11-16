/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 23:10:02 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:43 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptrs;

	i = 0;
	ptrs = (const unsigned char *)s;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
		{
			return ((void *)&ptrs[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	s[] = "hallo";
// 	int		c = 'a';
// 	size_t	n = 5;

// 	printf("%s\n%i\n%zu", s, c, n);
// 	printf("\n\n%s", (char *)ft_memchr(s, c, n));
// 	printf("\n%s", (char *)memchr(s, c, n));
// }