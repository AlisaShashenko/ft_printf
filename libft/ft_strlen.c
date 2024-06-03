/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:40:14 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:05:26 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is used to count the number of characters in a string,
 * not including the null character (\0).
 * 
 * @param s Pointer to the source string.
 * @return size_t The number of characters in s, not including the
 * null character (\0).
 */
/**
 * @brief (RU)  предназначена для подсчета количества символов в строке,
 * не включая нулевой символ (\0).
 * 
 * @param s Указатель на исходную строку.
 * @return size_t Количество символов в s, не включая нулевой символ (\0).
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i ++;
	}
	return (i);
}
/*int	main()
{
	char str[60] = "strlen in C";
	
	int length = strlen(str);
	
	printf("length = %d", length);
	return (0);
}*/