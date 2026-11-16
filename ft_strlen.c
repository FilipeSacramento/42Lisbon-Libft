/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:32:39 by filigome          #+#    #+#             */
/*   Updated: 2026/11/05 21:27:53 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char	str[] = "This string has... \nI dont know how many characters.";

// 	printf("%s\n%i\n%i", str, ft_strlen(str), strlen(str));
// }