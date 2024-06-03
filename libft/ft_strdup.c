/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:41:24 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:41:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) allocates memory in the heap and copies the contents of the
 * original string (s1) to a new memory location. The created duplicate string
 * is independent of the original string, i.e. it can be modified without
 * affecting the original.
 * 
 * @param s1 Pointer to the source string to be duplicated.
 * @return char* returns a pointer to a duplicate string in the heap.
 */

/**
 * @brief (RU) она выделяет память в куче и копирует содержимое исходной строки
 * (s1) в новую область памяти. Созданная дублирующая строка является
 * независимой от исходной строки, то есть ее можно модифицировать без
 * влияния на оригинал.
 * 
 * @param s1 Указатель на исходную строку, которую нужно дублировать.
 * @return char* возвращает указатель на дубликат строки в куче.
 */

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) +1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i ++;
	}
	dest[i] = 0;
	return (dest);
}

/*int	main()
{
	char	str[] = "Hello Malaga!";
	char	*dest;

	dest = ft_strdup(str);
	printf("Res copy: %s\n", dest);
	free(dest);
	return (0);
}*/