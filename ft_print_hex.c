/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:19:52 by ajordan-          #+#    #+#             */
/*   Updated: 2024/05/28 18:03:54 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief This function counts the number of hexadecimal digits required to
 * represent a non-negative unsigned integer (unsigned int).
 * Эта функция подсчитывает количество шестнадцатеричных цифр, необходимых для
 * представления неотрицательного целого числа без знака (unsigned int).
 * 
 * @param num A non-negative unsigned integer for which you want to calculate
 * the length of the hexadecimal representation.
 * Неотрицательное целое число без знака, для которого нужно посчитать
 * длину шестнадцатеричного представления.
 * @return int An integer representing the number of hexadecimal
 * digits in num.
 * Целое число, представляющее количество шестнадцатеричных цифр в num.
 * 
 * Описание работы:
 * 1) Инициализация:
 * 2) Переменная len инициализируется значением 0.
 * 3) Цикл:
 * Пока num не равно 0:
 * Увеличиваем len на 1.
 * Делим num на 16.
 * 4) Возврат:
 * Возвращаем len, т.е. количество шестнадцатеричных символов,
 * необходимых для представления num.
 */

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}
/*%X Prints a hexadecimal (base 16) number
in uppercase.*/
/*%x Prints a hexadecimal (base 16) number
in lower case.*/

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
