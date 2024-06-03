/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:23 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:27:49 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to search for the last occurrence of the character
 * c (as an integer) in the string s.
 * 
 * @param s Pointer to the source string.
 * @param c The symbol to be found (as an integer).
 * @return char* Pointer to the last occurrence of c in s (if found).
 */
/**
 * @brief (RU) предназначена для поиска последнего вхождения символа
 * c (в виде целого числа) в строке s.
 * 
 * @param s Указатель на исходную строку.
 * @param c Символ, который нужно найти (в виде целого числа).
 * @return char* Указатель на последнее вхождение c в s (если найдено).
 */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			ch;

	ch = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			res = (char *) &s[i];
		i ++;
	}
	if (s[i] == ch)
		res = (char *) &s[i];
	return (res);
}

/*int	main(void)
{
	const char	str[] = "Hola Malaga!";
	const char	target = 'M';
	char	*result;

	result = ft_strrchr(str, target);
	printf("Thr last '%c' he found: %s\n", target, result);
	return (0);
}*/