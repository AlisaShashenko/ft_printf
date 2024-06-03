/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:42:24 by user              #+#    #+#             */
/*   Updated: 2024/05/10 16:59:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

/**
 * @brief (EN) is designed to output a newline string to the specified file
 * descriptor.
 * 
 * @param s Pointer to the output string.
 * @param fd The file descriptor to output the string to.
 */
/**
 * @brief (RU) Эта функция выводит строку в заданный файловый дескриптор,
 * добавляя в конце символ новой строки (\n).
 * Важно отметить, что функция ft_putendl_fd добавляет символ новой строки (\n)
 * в конце строки. Если вы не хотите добавлять новую строку, вы можете
 * использовать ft_putchar_fd вместо этого.
 * @param s Указатель на выводимую строку.
 * @param fd Файловый дескриптор, в который нужно вывести строку.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s++, 1);
	}
	write(fd, "\n", 1);
}

/*int main()
{
	int	fd = open("myfile.txt", O_WRONLY | O_CREAT, 0666);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	ft_putendl_fd("Hola, mundo!", fd);
	ft_putendl_fd("¡Adiós!", fd);
	close(fd);
	return (0);
}*/
