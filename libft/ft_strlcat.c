/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:40:51 by user              #+#    #+#             */
/*   Updated: 2024/05/10 17:56:46 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to copy a string to another string, limiting
 * the size of the final string.
 * 
 * @param dst Pointer to the destination buffer into which the string will
 * be copied.
 * @param src Pointer to the source string to be copied.
 * @param dstsize The maximum size of the destination buffer (dst).
 */
/**
 * @brief (RU) предназначена для копирования строки в другую строку,
 * ограничивая размер конечной строки.
 * 
 * @param dst Указатель на буфер назначения, в который будет скопирована строка.
 * @param src Указатель на исходную строку, которая будет скопирована.
 * @param dstsize Максимальный размер буфера назначения (dst).
 * Проверяет dstsize:
 * Если dstsize меньше или равно 0, функция возвращает 0.
 * Находит конец строки dst:
 * Использует цикл while, чтобы пройти по строке dst, пока не найдет нулевой
 * символ (\0).
 * Вычисляет длину строки dst:
 * Вычитает 1 из индекса нулевого символа, чтобы получить длину строки dst без
 * нулевого символа.
 * Проверяет, поместится ли src в dst:
 * Сравнивает dstsize с суммой длины dst и длины src.
 * Если dstsize меньше, функция обрезает src до доступного места в dst.
 * Копирует src в dst:
 * Использует цикл while, чтобы скопировать каждый символ из src в dst, пока
 * не встретит нулевой символ (\0) или не достигнет конца dst.
 * Добавляет нулевой символ (\0):
 * Добавляет нулевой символ (\0) в конец скопированной части src в dst.
 * Возвращает новое значение dstsize:
 * Возвращает новую длину dst (длину dst до копирования src плюс длину
 * скопированной части src).
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cont;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	cont = dst_len;
	while (*src != '\0' && cont < (dstsize -1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (dst_len + src_len);
}

/*int main() {
    char dst[12] = "hello";
    const char *src = ", world!";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcat(dst, src, dstsize);

    printf("dst: %s\n", dst);
    printf("result: %zu\n", result);
}*/