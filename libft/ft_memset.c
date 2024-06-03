/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:42:48 by user              #+#    #+#             */
/*   Updated: 2024/05/10 16:49:26 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is used to fill len bytes in the memory area with the
 * specified value.
 * 
 * @param b Pointer to the beginning of the memory area to be filled.
 * @param c The value to fill the memory area with.
 * @param len The number of bytes to be filled.
 * @return void* Pointer to b on successful execution.
 */
/**
 * @brief (RU) предназначена для заполнения len байтов в области памяти
 * заданным значением.
 * 
 * @param b Указатель на начало области памяти, которую нужно заполнить.
 * @param c Значение, которым нужно заполнить область памяти.
 * @param len  Количество байтов, которые нужно заполнить.
 * @return void* Указатель на b при успешном выполнении.
 * Функция ft_memset посимвольно заполняет область памяти, указуемую b,
 * значением c.
 * Функция ft_memset не проверяет тип данных в области памяти.
 * Она заполняет все байты в указанной области заданным значением c,
 * независимо от того, что они представляют.
 * ft_memset не добавляет нулевой байт (\0) в конец строки.
 * Если вы хотите инициализировать строку как пустую, используйте ft_bzero.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p ++;
		len --;
	}
	return (b);
}

/*int	main()
{
	char str[100] = "memset is a complex function";

	ft_memset(str, '.', 8 * sizeof(char));
	printf("After memset(): %s\n", str);
	return 0;
}*/