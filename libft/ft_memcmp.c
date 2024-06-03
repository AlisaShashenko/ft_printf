/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:43:19 by user              #+#    #+#             */
/*   Updated: 2024/05/10 15:36:04 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN)is designed to compare two memory blocks by byte by by byte for
 * a specified number of bytes.
 * 
 * @param s1 Pointer to the first block of memory.
 * @param s2 Pointer to the second memory block.
 * @param n The maximum number of bytes to be compared.
 * @return int 
 */
/**
 * @brief (RU) предназначена для сравнения двух блоков памяти побайтно в течение
 * указанного количества байтов.
 * 
 * @param s1 Указатель на первый блок памяти.
 * @param s2 Указатель на второй блок памяти.
 * @param n Максимальное количество байтов, которые будут сравниваться.
 * @return int Если все байты совпадают, функция возвращает 0.
 * Если найден несовпадающий байт, функция возвращает разницу между
 * кодами ASCII этих байтов.
 * Сравнение продолжается до тех пор, пока не будет достигнут предел n
 * байтов или не будет найден несовпадающий байт.
 * Важно отметить:
 * Функция ft_memcmp сравнивает байты, а не символы.
 * Если вы хотите сравнить строки, используйте ft_strcmp
 * ft_memcmp не проверяет, являются ли байты нулевыми байтами (\0).
 * Если вам нужно сравнить строки с учетом нулевых байтов, используйте
 * ft_strncmp.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str_s1;
	const unsigned char	*str_s2;
	size_t				i;

	i = 0;
	str_s1 = (const unsigned char *)s1;
	str_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str_s1[i] != str_s2[i])
			return (str_s1[i] - str_s2[i]);
		i ++;
	}
	return (0);
}

/*int	main()
{
	char	str1[] = "ft_memcmp";
	char	str2[] = "ft_memcmp";
	size_t	n;
	int	result;

	n = 8;
	result = ft_memcmp(str1, str2, n);
	if (result == 0)
	{
	printf("First %zu bytes str1 и str2 the same.\n", n);
	}
	else
	{
    printf("First %zu bytes str1 и str2 are not the same.\n", n);
	}
	return (0);
}*/