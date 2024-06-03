/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:47:02 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:47:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) The ft_bzero function is designed to clear the memory
 * block to zero bytes.
 * @param void s - This is a pointer to the block of memory you want to clear.
 * @param size_t n - an unsigned integer value that indicates the number of
 * bytes to set to zero.
 */

/**
 * @brief (RU) ft_bzero заполняет заданный участок памяти байтами со значением 0
 * более безопасная функция для работы со стоками считаются ft_memset и ft_calloc
 * используется для обеспечения того, чтобы переменные и массивы не содержали
 * мусорных значений, которые могут привести к ошибкам.
 * @param void s - Это указатель на блок памяти, который вы хотите очистить.
 * Поскольку это универсальный указатель void, он может указывать на любой
 * тип данных. Однако он обычно используется с массивами символов, чтобы
 * установить их в пустые строки, заполненные нулями.
 * @param size_t n - Это значение беззнакового целого числа, которое указывает
 * количество байтов, которые нужно установить в ноль.
 * 
 * char *p = (char *)s;: Эта строка приводит универсальный указатель
 * void s к указателю char p.
 */

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p = 0;
		p ++;
		n --;
	}
}

/*int	main(void)
{
	char	str[100];
	int		i;

	printf("Before ft_bzero: %s\n", str);
	printf("After ft_bzero: ");

	i = 0;
	while (i < 100)
	{
		i++;
		ft_bzero(&str[i], 1);
		printf(" %d", str[i]);
	}
	return (0);
}*/