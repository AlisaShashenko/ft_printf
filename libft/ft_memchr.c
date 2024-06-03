/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:43:47 by user              #+#    #+#             */
/*   Updated: 2024/05/10 15:26:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to search for the first occurrence of a specified
 * character in memory.
 * 
 * @param s Pointer to the beginning of the memory area to be searched.
 * @param c A symbol to find.
 * @param n The maximum number of bytes to be viewed.
 * @return void* 
 */
/**
 * @brief (RU) предназначена для поиска первого вхождения заданного символа
 * в памяти.
 * Функция ft_memchr просматривает байты, начиная с s, до тех пор, пока не
 * будет найден байт, равный c или не будет достигнут предел n байтов.
 * Возвращаемое значение - Указатель на первый найденный байт, равный c,
 * если он был найден в пределах n байтов. NULL, если символ c не был
 * найден в пределах n байтов.
 * @param s Указатель на начало области памяти, в которой будет
 * осуществляться поиск.
 * @param c Символ, который нужно найти.
 * @param n Максимальное количество байтов, которые будут просмотрены.
 * @return void* Функция возвращает указатель на позицию 'c' в строке.
 * Важно отметить:
 * Функция ft_memchr не проверяет, является ли символ c нулевым байтом (\0).
 * Если вы хотите найти нулевой байт, используйте ft_strchr, которая
 * является другой функцией в библиотеке libft.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *)s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i ++;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "Hola, Mundo!";
	int	target = 'u'; //ASCII

	void	*result = memchr(str, target, sizeof(str));

	if (result != NULL)
	{
		printf("Addres '%c' here: %p\n", target, result);
	}
	else
	{
		printf("Symbol '%c' not found in memory.\n", target);
	}
	return 0;
}*/