/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 02:03:13 by filigome          #+#    #+#             */
/*   Updated: 2026/11/03 22:40:59 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>

// char	ft_toupper2(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// char	ft_tolower2(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("HELLO how are YOU today?", ft_toupper2);
// 	if (!str)
// 		return (1);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }