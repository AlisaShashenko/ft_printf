/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:42:37 by user              #+#    #+#             */
/*   Updated: 2024/05/10 16:54:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

/**
 * @brief (EN) is designed to output a single character to the specified file
 * descriptor.
 * 
 * @param c The symbol to be taken out.
 * @param fd The file descriptor to output the character to.
 */
/**
 * @brief (RU)Функция ft_putchar_fd предназначена для печати одного символа
 * в указанный файловый дескриптор.
 * Однозначно идентифицировать открытый файл или ресурс.
 * Управлять доступом к файлу или ресурсу (чтение, запись, закрытие).
 * Передавать информацию о файле или ресурсе между программами.
 * 
 * @param c Символ, который нужно вывести.
 * @param fd Файловый дескриптор, в который нужно вывести символ.
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int	main()
{
	int	fd = open("myfile.txt", O_WRONLY | O_CREAT, 0666);

	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	ft_putchar_fd('H', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
}*/
