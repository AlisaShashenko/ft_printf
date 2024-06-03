/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:41:34 by user              #+#    #+#             */
/*   Updated: 2024/05/10 17:10:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to find the first occurrence of the character
 * c in the string s.
 * 
 * @param s Pointer to the source string
 * @param c A symbol to find.
 * @return char* Pointer to the first found character c in string s, if it
 * exists.
 */
/**
 * @brief (RU) предназначена для поиска первого вхождения символа c в строке s.
 * 
 * @param s Указатель на исходную строку.
 * @param c Символ, который нужно найти.
 * @return char* 
 * Если совпадение найдено, функция возвращает указатель на первый
 * найденный символ c.
 * Если c не найден до конца строки, функция возвращает NULL.
 */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s ++)
			return (0);
	}
	return ((char *)s);
}

/*int main() {
  const char *str = "Hola, mundo!";
  char *p = ft_strchr(str, 'a');

  if (p != NULL) {
    printf("Primera aparición de 'a': %c\n", *p);
  } else {
    printf("No se encontró el carácter 'a'\n");
  }

  return 0;
}*/
