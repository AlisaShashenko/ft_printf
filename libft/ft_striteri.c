/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:41:13 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:13:53 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to apply the function to each character in the
 * string
 * 
 * @param s Pointer to the source string.
 * @param f Pointer to the function that will be applied to each character.
 */
/**
 * @brief (RU) предназначена для применения ФУНКЦИИ к каждому символу
 * в строке.
 * 
 * @param s Указатель на исходную строку.
 * @param f Указатель на функцию, которая будет применяться к каждому символу.
 * * Похожая функция ft_strmapi
 * ft_striteri - Не возвращает никакого значения (void). Она просто вызывает
 * f для каждого символа.
 * ft_strmapi - Возвращает указатель на новую строку (char *). Эта новая
 * строка содержит результат применения f к каждому символу исходной строки.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

/*void	to_capital(unsigned int i, char *c)
{
	*c = toupper(*c); // Convert character to uppercase
}

int	main()
{
	char	str[] = "Hola, mundo!";

	ft_striteri(str, to_capital);
	printf("%s\n", str); // Output: HOLA, MUNDO!
	return (0);
}*/
