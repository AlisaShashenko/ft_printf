/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:40:01 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:13:18 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to apply a function to each character in a string,
 * passing the index of each character as the first argument to that function.
 * 
 * @param s Pointer to the source string.
 * @param f Pointer to the function that will be applied to each character.
 */
/**
 * @brief (RU) предназначена для применения функции к каждому символу в
 * строке, передавая индекс каждого символа в качестве первого аргумента
 * этой функции.
 * 
 * @param s  Указатель на исходную строку.
 * @param f Указатель на функцию, которая будет применяться к каждому символу.
 * @return char* Указатель на новую строку, которая является результатом
 * применения f к каждому символу s.
 * Похожая функция ft_striteri
 * ft_striteri - Не возвращает никакого значения (void). Она просто вызывает
 * f для каждого символа.
 * ft_strmapi - Возвращает указатель на новую строку (char *). Эта новая
 * строка содержит результат применения f к каждому символу исходной строки.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char f(unsigned int i, char c)  //прототип функции ft_toupper
{
	char str;
	str = c -=32;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f); // применяем к каждому символу ft_toupper
	printf("%s\n", str2);
	free(str2);
}*/