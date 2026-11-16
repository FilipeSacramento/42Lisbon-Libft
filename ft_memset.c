/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:57:59 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:45 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	s[] = "Hello";
// 	char	c = '0';
// 	size_t n = 3;

// 	printf("%s\n%c\n%zu", s, c, n);
// 	printf("\n\n%s\n%s", (char *)ft_memset(s, c, n), (char *)memset(s, c, n));
// }