/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:38:55 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:35:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is intended to create a substring from the source string s,
 * starting from the start position and of length len characters.
 * 
 * @param s Pointer to the source string.
 * @param start The non-negative position at which the substring begins.
 * @param len Maximum substring length.
 * @return char* 
 */
/**
 * @brief (RU) предназначена для создания подстроки из исходной строки s,
 * начиная с позиции start и длиной len символов.
 * 
 * @param s указатель на исходную строку.
 * @param start Неотрицательная позиция, с которой начинается подстрока.
 * @param len Максимальная длина подстроки.
 * @return char* 
 * Проверяет параметры:
 * Проверяет, является ли start неотрицательным числом.
 * Проверяет, является ли len меньшим или равным длине s.
 * Выделяет память для новой строки:
 * Выделяет память для новой строки, которая будет достаточно длинной, чтобы
 * вместить подстроку s с длиной len.
 * Копирует подстроку в новую строку:
 * Копирует len символов из s, начиная с позиции start, в новую строку.
 * Добавляет нулевой символ (\0):
 * Добавляет нулевой символ (\0) в конец новой строки.
 * Возвращает указатель на новую строку:
 * Возвращает указатель на новую строку, которая содержит подстроку s.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*int main()
{
	char		string[] = "My name is!";
	int			start = 0;
	size_t		subs_length = 7;

	char		*extracted_substring = ft_substr(string, start, subs_length);

	if (extracted_substring == NULL)
{
	printf("Ошибка: Неверные входные данные или не удалось выделить память.\n");
}
else
{
	printf("Извлеченная подстрока: %s\n", extracted_substring);
	free(extracted_substring);  // Не забудьте освободить выделенную память!
}
}*/
