/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:43:11 by user              #+#    #+#             */
/*   Updated: 2024/05/10 16:01:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN)  is used to copy n bytes from the source memory area to
 * the assigned memory area.
 * 
 * @param dst Pointer to the assigned memory area.
 * @param src Pointer to the source memory area.
 * @param n The number of bytes to copy
 * @return void* Pointer to dst on successful execution.
 */
/**
 * @brief (RU) предназначена для копирования n байтов из исходной области
 * памяти в назначенную область памяти.
 * 
 * @param dst Указатель на назначенную область памяти.
 * @param src Указатель на исходную область памяти.
 * @param n Количество байтов, которые нужно скопировать.
 * @return void* Указатель на dst при успешном выполнени.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == (void *)0 && src == (void *)0)
	{
		return (dst);
	}
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst ++) = *(tmp_src ++);
		n --;
	}
	return (dst);
}

/*int	main()
{
	char	src[100] = "42 es mejor experiencia de programación a C.";
	char	dst[100];

	ft_memcpy(dst, src, sizeof(src));
	printf("dst after ft_memcpy: %s\n", dst);
	return 0;
}*/