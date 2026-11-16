/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:35:01 by filigome          #+#    #+#             */
/*   Updated: 2026/11/02 21:00:21 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordnum(char const *s, char c)
{
	size_t	i;
	size_t	wnum;

	i = 0;
	wnum = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wnum++;
		i++;
	}
	return (wnum);
}

static void	ft_freearray(char **array, int j)
{
	while (j > 0)
		free(array[--j]);
	free(array);
}

static int	ft_makearray(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wordstart;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		wordstart = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > wordstart)
		{
			array[j] = ft_substr(s, wordstart, i - wordstart);
			if (!array[j])
				return (ft_freearray(array, j), 0);
			j++;
		}
	}
	array[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (ft_wordnum(s, c) + 1));
	if (!array)
		return (NULL);
	if (!ft_makearray(array, s, c))
		return (NULL);
	return (array);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	s[] = "Hey how are you?";
// 	char		c = ' ';
// 	int			i = 0;
// 	char **array = ft_split(s, c);

// 	printf("%s\n%c\n\n", s, c);

// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		free(array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }