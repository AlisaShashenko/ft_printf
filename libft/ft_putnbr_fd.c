/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:42:04 by user              #+#    #+#             */
/*   Updated: 2024/05/10 17:02:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

/**
 * @brief (EN) is designed to output an integer to the specified file
 * descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor to output the number to.
 */
/**
 * @brief (RU)Функция ft_putnbr_fd является полезной функцией для вывода
 * целых чисел в указанный дескриптор файла.
 * Функция ft_putnbr_fd принимает целое число n и дескриптор файла fd в
 * качестве параметров. Она преобразует целое число n в его десятичное
 * представление и записывает результат в указанный дескриптор файла.
 * Функция использует основание "0123456789" для преобразования целого
 * числа n в его десятичное представление.
 * @param n Целое число, которое нужно вывести.
 * @param fd Файловый дескриптор, в который нужно вывести число.
 */

void	ft_putnbr_fd(int n, int fd)
{
	char	str;

	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write (fd, "8", 1);
		return ;
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		str = '0' + n % 10;
	}
	else
		str = '0' + n;
	write(fd, &str, 1);
}

/*int	main()
{
	int	n = -12345;
	int	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);

	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}*/

/*int	main()
{
	int	n;
	int	fd; // Стандартный вывод
	
	n = -12345;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}*/