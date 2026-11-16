/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 02:50:13 by filigome          #+#    #+#             */
/*   Updated: 2026/11/05 21:30:01 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "Hello";

// 	printf("%s", s);
// 	printf("\n\n%s", ft_strdup(s));
// 	printf("\n%s\n", strdup(s));
// }