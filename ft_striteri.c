/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 02:34:15 by filigome          #+#    #+#             */
/*   Updated: 2026/11/03 22:41:39 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <ctype.h>

// char	ft_toupper2(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = toupper((unsigned char)*c);
// }

// char	ft_tolower2(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = tolower((unsigned char)*c);
// }

// int	main(void)
// {
// 	char str[] = "HELLO how are YOU today?";

// 	ft_striteri(str, ft_tolower2);
// 	printf("%s\n", str);
// }