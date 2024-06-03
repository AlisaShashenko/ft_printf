/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:35 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:24:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief is designed to search for the first occurrence of a needle substring
 * in a haystack string, limiting the search to len characters.
 * 
 * @param haystack Pointer to the string to be searched (haystack).
 * @param needle Pointer to the substring to be found (needle).
 * @param len The maximum number of characters in haystack that will be
 * checked in a search.
 * @return char* Pointer to the first occurrence of needle in haystack
 * (if found).
 */
/**
 * @brief (RU) предназначена для поиска первого вхождения подстроки needle в
 * строке haystack, ограничивая поиск len символами.
 * 
 * @param haystack Указатель на строку, в которой будет выполняться
 * поиск (haystack).
 * @param needle Указатель на подстроку, которую нужно найти (needle).
 * @param len Максимальное количество символов в haystack,
 * которые будут проверены при поиске.
 * @return char* Указатель на первое вхождение needle в haystack
 * (если найдено).
 * Если все символы needle совпадают с соответствующими символами
 * haystack, функция возвращает указатель на первый символ needle
 * в haystack.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0')
	{
		n = 0;
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			if (haystack[i + n] == '\0' && needle[n] == '\0')
				return ((char *) &haystack[i]);
			n ++;
		}
		if (needle[n] == '\0')
			return ((char *) haystack + i);
		i ++;
	}
	return (0);
}

/*int	main()
{
	const char	haystack[] = "This is a haystack";
	const char	needle[] = "stack";
	size_t		len;
	char		*result;

	len = 18;
	result = ft_strnstr(haystack, needle, len);
	if (result != NULL)
	{
		printf("Подстрока '%s' найдена на позиции %d\n",
			needle, (int)(result - haystack));
	}
	else
	{
		printf("Подстрока '%s' не найдена\n", needle);
	}
	//printf("The substring is: %s\n", result);
	return (0);
}*/
