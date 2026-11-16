/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:52:47 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 22:28:36 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;

	dsti = 0;
	srci = 0;
	while (dsti < dstsize && dst[dsti])
		dsti++;
	while (src[srci] && (dsti + srci + 1) < dstsize)
	{
		dst[dsti + srci] = src[srci];
		srci++;
	}
	if (dsti < dstsize)
		dst[dsti + srci] = '\0';
	while (src[srci])
		srci++;
	return (dsti + srci);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	src[] = " how are you today?";
// 	char	dst[] = "Hello";
// 	size_t	dstsize = 24;

// 	printf("%s\n%s\n%zu", dst, src, dstsize);
// 	ft_strlcat(dst, src, dstsize);
// 	printf("\n\n%s\n%zu", dst, ft_strlcat(dst, src, dstsize));
// }