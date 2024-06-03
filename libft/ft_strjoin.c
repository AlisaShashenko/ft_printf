/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:41:02 by user              #+#    #+#             */
/*   Updated: 2024/05/10 17:46:32 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is used to merge two lines into one new line.
 * 
 * @param s1 Pointer to the first line to be merged.
 * @param s2 Pointer to the second line to be merged.
 * @return char* 
 */
/**
 * @brief (RU) предназначена для объединения двух строк в одну новую строку.
 * 
 * @param s1 Указатель на первую строку, которую нужно объединить.
 * @param s2 Указатель на вторую строку, которую нужно объединить.
 * @return char* 
 * Выделяет память для новой строки, достаточной для хранения содержимого
 * s1 и s2, а также нулевого символа (\0).
 * Копирует s1 в начало новой строки.
 * Добавляет нулевой символ (\0) в конец скопированной части s1.
 * Копирует s2 после нулевого символа, скопированного из s1.
 * Добавляет новый нулевой символ (\0) в конец скопированной части s2.
 * Возвращает указатель на новую строку.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		len1;
	int		len2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		new_str = (char *)malloc(sizeof(char) * (len1 + len2 +1));
		if (new_str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			new_str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			new_str[len1] = s2[i];
			len1++;
		}
		new_str[len1] = '\0';
		return (new_str);
	}
	return (NULL);
}

/*int	main()
{
	char	str1[] = "Hello";
	char	str2[] = " world!";
	char	*res = ft_strjoin(str1, str2);

	printf("%s\n", res);
	free(res);
	return (0);
}*/