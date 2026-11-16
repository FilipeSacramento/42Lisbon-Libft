/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:48:28 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:42 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
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

// 	printf("%i\n%i", ft_isdigit(c), isdigit(c));
// }