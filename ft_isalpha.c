/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:29:37 by filigome          #+#    #+#             */
/*   Updated: 2026/11/05 20:43:19 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main (void)
// {
// 	char	c = '2';

// 	printf("%i\n%i", ft_isalpha(c), isalpha(c));
// }