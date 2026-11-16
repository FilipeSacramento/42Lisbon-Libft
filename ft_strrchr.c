/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:46:01 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:52 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	s[] = "Hello";
// 	char	c = 'l';

// 	printf("%s\n%c\n\n%s\n\n%s", s, c, ft_strrchr(s, c), strrchr(s, c));
// }