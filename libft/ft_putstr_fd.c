/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:41:55 by user              #+#    #+#             */
/*   Updated: 2024/05/10 17:06:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

/**
 * @brief (EN) is designed to output an integer to the specified file
 * descriptor.
 * 
 * @param s The integer to output.
 * @param fd The file descriptor to output the number to.
 */
/**
 * @brief (RU) Эта функция выводит строку в заданный файловый дескриптор.
 * ft_putstr_fd не добавляет новую строку (\n) в конце выводимой строки.
 * Если вы хотите добавить новую строку, вам нужно вызвать ft_putchar_fd с
 * имволом новой строки ('\n') после вызова ft_putstr_fd.
 * @param s Целое число, которое нужно вывести.
 * @param fd Файловый дескриптор, в который нужно вывести число.
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
}

/*int	main()
{
	int fd = open("myfile.txt", O_WRONLY | O_CREAT, 0666);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	ft_putstr_fd("Hola, mundo!", fd);
	close(fd);
	return (0);
}*/
