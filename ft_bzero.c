/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 23:10:09 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:25 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s1[] = "Hello";
// 	size_t n = 3;
// 	printf("%s\n%zu", s1, n);

// 	ft_bzero(s1, n);
// 	printf("\n\n%s", s1);

// 	char s2[] = "Hello";
// 	ft_bzero(s2, n);
// 	printf("\n%s\n", s2);
// }