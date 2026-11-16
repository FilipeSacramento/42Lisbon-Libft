/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:51:16 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 19:34:04 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_find(s1[i], set) == 1)
		i++;
	while (j > i && ft_find(s1[j - 1], set) == 1)
		j--;
	ptr = ft_substr(s1, i, j - i);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	s1[] = "xzxzxzxxzxzxHello how are you today?xzxzxzxz";
// 	const char	set[] = "zx";

// 	printf("%s\n%s", s1, set);
// 	printf("\n\n%s", ft_strtrim(s1, set));
// }