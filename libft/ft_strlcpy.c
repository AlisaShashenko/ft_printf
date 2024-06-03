/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:40:34 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:05:26 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to copy a string to another string, limiting the
 * size of the final string.
 * 
 * @param dst Pointer to the destination buffer into which the string will
 * be copied.
 * @param src Pointer to the source string to be copied.
 * @param dstsize The maximum size of the destination buffer (dst).
 * @return size_t 
 */
/**
 * @brief (RU) предназначена для копирования строки в другую строку,
 * ограничивая размер конечной строки.
 * 
 * @param dst Указатель на буфер назначения, в который будет скопирована
 * строка.
 * @param src Указатель на исходную строку, которая будет скопирована.
 * @param dstsize Максимальный размер буфера назначения (dst).
 * @return size_t Длину src (без учета нулевого символа).
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (dstsize < 1)
		return (res);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}

/*int	main()
{
	char	dst[50] = "Es dst. ";
	char	src[50] = "Es src. ";

	ft_strlcpy(dst, src, 8);
	printf("%s\n", dst);
	return (0);
}*/
