/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:43:00 by user              #+#    #+#             */
/*   Updated: 2024/05/10 16:38:45 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is used to copy len bytes from the source memory area to the
 * assigned memory area.
 * 
 * @param dst Pointer to the assigned memory area.
 * @param src Pointer to the source memory area.
 * @param len The number of bytes to copy.
 * Pointer to dst on successful execution.
 */
/**
 * @brief (RU) предназначена для копирования len байтов из исходной области
 * памяти в назначенную область памяти.
 * 
 * @param dst Указатель на назначенную область памяти.
 * @param src Указатель на исходную область памяти.
 * @param len Количество байтов, которые нужно скопировать.
 * Указатель на dst при успешном выполнении.
 */

void	make_copy(unsigned char *dst, const unsigned char *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i --;
			dst[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i ++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;

	if (!src && !dst)
		return (0);
	cdst = (unsigned char *)dst;
	csrc = (const unsigned char *)src;
	make_copy(cdst, csrc, len);
	return (dst);
}

/*int	main(void)
{
	char	dst[100] = "abcdoper";
	char	src[100] = "vbth";

	ft_memmove(dst, src, 4);
	printf("dst after ft_memcpy: %s\n", dst);
	return (0);
}*/
