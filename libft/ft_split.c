/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:41:44 by user              #+#    #+#             */
/*   Updated: 2024/05/10 15:44:08 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is used to divide a string into substrings based on the
 * delimiter character.
 * @param s Pointer to the source string.
 * @param c Separation Symbol.
 */
/**
 * @brief (RU) ft_countword: Подсчитывает количество слов в строке, разделенных
 * заданным символом.
 * @param s Указатель на строку, в которой нужно подсчитать слова.
 * @param c Символ, который используется для разделения слов.
 * возвр size_t: Количество слов в строке.
 * ft_split: Разделяет строку на массив слов, используя заданный символ
 * разделения
 * char **: Указатель на массив строк (слов). NULL, если произошла ошибка.
 * ft_split сначала использует ft_countword для определения кол слов в строке
 * Затем она выделяет память для массива строк (слов) достаточного размера.
 * - Для каждого слова:
 * - Она выделяет память для копии слова.
 * - Копирует слово из s в выделенную память.
 * - Добавляет указатель на копию слова в массив строк.
 * - В конце добавляет NULL в конец массива строк, чтобы указать его конец.
 * - Возвращает указатель на массив строк.
 * 
 */

/*char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s ++)
			return (0);
	}
	return ((char *)s);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

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
}*/

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

/*int	main() {
	char	const *str = "This is a string with delimiters,
		multiple spaces,and an empty word.";
	char	delimiter = ',';
	char	**split_words;

	split_words = ft_split(str, delimiter);

	if (split_words)
	{
		int i = 0;
		while (split_words[i])
	{
		printf("Word %d: %s\n", i + 1, split_words[i]);
		i++;
	}
		free(split_words); // Free the allocated memory after use
	}
	else
	{
		printf("Error: Memory allocation failed or empty string.\n");
	}
	return (0);
}*/
