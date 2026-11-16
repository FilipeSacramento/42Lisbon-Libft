/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:59:34 by filigome          #+#    #+#             */
/*   Updated: 2026/11/04 21:51:40 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main (void)
// {
// 	char	c = '\n';

// 	printf("%i\n%i", ft_isprint(c), isprint(c));
// }