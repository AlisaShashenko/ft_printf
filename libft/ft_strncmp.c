/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:48 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:22:49 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to compare the first n characters of two strings
 * s1 and s2.
 * 
 * @param s1 The first line for comparison.
 * @param s2 pointer to the second string to compare.
 * @param n The maximum number of characters that will be compared.
 */
/**
 * @brief (RU) предназначена для сравнения первых n символов двух строк s1 и s2.
 * 
 * @param s1 казатель на первую строку для сравнения.
 * @param s2 Указатель на вторую строку для сравнения.
 * @param n Максимальное количество символов, которые будут сравниваться.
 * @return int 0, если первые n символов s1 и s2 совпадают.
 * 1, если первый несовпадающий символ в s1 больше, чем соответствующий
 * символ в s2.
 * -1, если первый несовпадающий символ в s1 меньше, чем соответствующий
 * символ в s2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i ++;
	}
	return (0);
}

/*int main()
{
	char	str1[] = "ABCDef";
	char	str2[] = "ABCDEF";
	int	result;

  // Сравнение первых 5 символов
	result = ft_strncmp(str1, str2, 4);
	if (result == 0)
	{
	printf("The first four cgaracteres the same.\n");
	}
	else
	{
	printf("The first four cgaracteres are not the same.\n");
	}
	return 0;
}*/
