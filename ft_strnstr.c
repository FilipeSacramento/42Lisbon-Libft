/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:15:36 by filigome          #+#    #+#             */
/*   Updated: 2026/10/31 22:33:39 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char big[] = "Ola boa tarde";
// 	char little[] = "boa";
// 	size_t len = 10;

// 	printf("%s\n", ft_strnstr(big, little, len));
// }

/*TUTORIAL MALORY*/

				// return((char *) (little + i)); to optimize

// int main(void)
// {
// 	int		i;

// 	i = 0;

// 	while (i < 128)
// 	{
// 		printf("'%c' (%d)\n", i, i);
// 		i++;
// 	}
// 	char c = '7';
// 	printf("'%c' (%d)\n", c, (int) c);

// }

// int main(void)
// {
// 	int			i;
// 	const char	*str = "Hello world!";

// 	i = 0;
// 	printf("str is '%s' at memory address (%p)\n", str, str);
// 	while (str[i])
// 	{
// 		printf("str @ pos [%03d]: '%c' (%p)\n", i, str[i], str + i);
// 		i++;
// 	}
// 	printf("string (char ptr) is: %d\n", str);
// 	printf("pointer derefence: %c\n", *str);

// }