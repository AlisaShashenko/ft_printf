/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:40:58 by ajordan-          #+#    #+#             */
/*   Updated: 2024/05/28 16:00:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

/**
 * @brief The ft_putstr function traverses the string character by character,
 * using the write function to print each character to standard output.
 * It stops when it encounters a null character (\0)
 * Функция ft_putstr проходит по строке символ за символом, используя функцию
 * write для печати каждого символа на стандартный вывод.
 * Она останавливается, когда встречает нулевой символ (\0).
 * 
 * @param str This is a pointer to the character string to be output.
 * Это указатель на строку символов, которую нужно вывести.
 */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*%s Print a string*/
/**
 * @brief checks if str points to NULL. If so, it prints "(null)"
 * and returns 6. If str is not NULL, it prints the characters of the
 * string one by one until it encounters a null character, and returns
 * the number of characters printed.
 * 
 * @param str  This is a pointer to the character string to be output.
 * Это указатель на строку символов, которую нужно вывести.
 * 
 * @return int 
 * Декларируется целая переменная i для хранения индекса текущего символа
 * в строке.
 * Инициализируется переменная i нулем, чтобы начать с первого символа строки.
 * Эта проверка if определяет, указывает ли str на NULL.
 * ft_putstr("(null)");:
 * Если str равен NULL, функция ft_putstr вызывается для печати строки "(null)"
 * на стандартный вывод.
 * Функция возвращает значение 6, которое соответствует количеству символов в
 * строке "(null)" (не считая нулевого символа).
 * 
 * Если str не равен NULL, цикл while продолжается до тех пор, пока не будет
 * достигнут нулевой символ (\0) в строке.
 * 
 * После выхода из цикла while функция возвращает значение переменной i,
 * которое представляет собой количество напечатанных символов
 * (не считая нулевого символа).
 */

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/*%d Prints a decimal number (base 10).*/
/*%i Prints a base 10 integer.*/
/**
 * @brief Converts an integer (n) to a string using ft_itoa.
 * Prints the resulting string to standard output using ft_printstr.
 * Frees the memory allocated for the string.
 * Returns the number of characters printed.
 * 
 * Преобразует целое число (n) в строку с помощью ft_itoa.
 * Печатает полученную строку в стандартный вывод с помощью ft_printstr.
 * Освобождает память, выделенную для строки.
 * Возвращает количество напечатанных символов.
 * 
 * @param n This is the integer to be output.
 * Это целое число, которое нужно вывести.
 * @return int
 * 
 * Декларируется целая переменная len для хранения длины строки,
 * представляющей число.
 * Декларируется указатель на символ num для хранения строки,
 * представляющей число.
 * 
 * ft_itoa должна преобразовывать n в строку, представляющую это число.
 * Результат ft_itoa (указатель на строку) присваивается num.
 * ft_printstr должна печатать строку, на которую указывает num,
 * в стандартный вывод.
 * Количество напечатанных символов (ft_printstr) присваивается len.
 * free(num);
 * 
 * Вызывается функция free для освобождения памяти, выделенной для
 * строки, на которую указывает num.
 * Это важно, так как память, выделенная с помощью malloc
 * (вероятно, используется в ft_itoa), должна быть освобождена,
 * чтобы избежать утечек памяти.
 * 
 * Функция возвращает значение len, которое представляет собой
 * количество напечатанных символов (длина строки, представляющей число).

 */

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
/*%% to print the percentage symbol.*/

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
