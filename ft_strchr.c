/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:29:28 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:46 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	s[] = "Hello";
// 	char	c = 'l';

// 	printf("%s\n%c\n\n%s\n\n%s", s, c, ft_strchr(s, c), strchr(s, c));
// }