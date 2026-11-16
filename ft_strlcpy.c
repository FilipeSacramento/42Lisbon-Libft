/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:52:29 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:49 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	src[] = "RIGHT";
// 	char	dst[] = "WRONG";
// 	size_t	dstsize = 6;

// 	printf("%s\n%s\n\n%zu", dst, src, dstsize);
// 	ft_strlcpy(dst, src, dstsize);
// 	printf("\n\n%s\n%s", dst, src);
// }