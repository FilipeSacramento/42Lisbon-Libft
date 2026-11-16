/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:59:15 by filigome          #+#    #+#             */
/*   Updated: 2026/11/05 18:40:36 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

// #include <fcntl.h>

// int	main(void)
// {
// 	int fd = open("ft_putstr_fd.c", O_WRONLY | O_APPEND);

// 	close(fd);

// 	// char *ptr = malloc(1);
// 	// free(ptr);

// 	// ft_putnbr_fd(fd, fd);
// 	return (0);
// }