/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:58:09 by ajordan-          #+#    #+#             */
/*   Updated: 2024/05/28 15:03:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*%c Prints a single character.*/

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * @brief ft_formats function is a versatile function for formatted output in C.
 * It takes a format specifier and a variable argument list, allowing it to print
 * various data types according to the format codes.It relies on helper functions
 * to perform the actual printing and returns the total number of characters
 * printed.
 * 
 * ft_formats - это универсальная функция для форматированного вывода в C.
 * Она  принимает спецификатор формата и список переменных аргументов,
 * позволяя ей печатать различные типы данных в соответствии с кодами формата.
 * Она опирается на вспомогательные функции для выполнения фактического
 * вывода и возвращает общее количество напечатанных символов.
 * 
 * @param args This is a variable argument list that provides access to
 * the list of arguments passed to the function after the named arguments.
 * Это список переменных аргументов, который обеспечивает
 * доступ к списку аргументов, передаваемых функции после именованных
 * аргументов.
 * @param format This is a character (char) that specifies a format
 * specifier for printing.
 * Это символ (char), который указывает спецификатор формата для печати.
 * @return int возвращает целое число
 * 
 * The function uses a series of if statements to check the value
 * of the format character and call appropriate printing functions based
 * on the format specifier:
 * 'c': Prints a character using ft_printchar.
 * 's': Prints a string using ft_printstr.
 * 'p': Prints a pointer address using ft_print_ptr.
 * 'd': Prints a signed integer using ft_printnbr.
 * 'i': Treated the same as 'd'.
 * 'u': Prints an unsigned integer using ft_print_unsigned.
 * 'x': Prints a hexadecimal number in lowercase using ft_print_hex.
 * 'X': Prints a hexadecimal number in uppercase using ft_print_hex.
 * '%': Prints a literal percent sign using ft_printpercent.
 * After processing the format specifier, the function returns the total
 * number of characters printed (print_length).
 * 
 * Декларируется целая переменная print_length для хранения общего количества
 * напечатанных символов. Она инициализируется 0.
 * Функция использует серию if-операторов для проверки значения символа
 * format и вызова соответствующих функций печати на основе спецификатора
 * формата:
 * 'c': Печатает символ с помощью ft_printchar.
 * 's': Печатает строку с помощью ft_printstr.
 * 'p': Печатает адрес указателя с помощью ft_print_ptr.
 * 'd': Печатает целое число со знаком с помощью ft_printnbr.
 * 'i': Обрабатывается как 'd'.
 * 'u': Печатает целое число без знака с помощью ft_print_unsigned.
 * 'x': Печатает шестнадцатеричное число в нижнем регистре
 * с помощью ft_print_hex.
 * 'X': Печатает шестнадцатеричное число в верхнем регистре
 * с помощью ft_print_hex.
 * '%': Печатает буквальный знак процента с помощью ft_printpercent.
 * Каждый if-оператор вызывает соответствующую функцию печати
 * и добавляет количество напечатанных символов к переменной print_length.
 * После обработки спецификатора формата функция возвращает общее
 * количество напечатанных символов (print_length).
 */

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}

/**
 * @brief 
 * 
 * @param const_char*str This is a pointer to a constant format string
 * that can contain regular characters and format specifiers starting with %.
 * Это указатель на постоянную строку формата,
 * которая может содержать обычные символы и спецификаторы формата,
 * начинающиеся с %.
 * 
 * @param ... This is a list of variable arguments. It allows you to
 * pass an arbitrary number of arguments to the function after the format string.
 * Это список переменных аргументов. Он позволяет передать в функцию
 * произвольное количество аргументов после строки формата.
 * @return int 
 * Декларируется целая переменная i для хранения индекса текущего
 * символа в строке формата.
 * Декларируется объект va_list для работы со списком переменных аргументов.
 * Декларируется целая переменная print_length для хранения общего количества
 * напечатанных символов.
 * Инициализируется переменная i нулем, чтобы начать с первого символа
 * строки формата.
 * Инициализируется переменная print_length нулем, чтобы начать счетчик с нуля.
 * 
 * va_start(args, str);
 * Инициализируется объект va_list с помощью функции va_start. Эта
 * функция указывает va_list на первый переменный аргумент, который следует
 * за строкой формата (str).
 * Цикл while продолжается до тех пор, пока не будет достигнут нулевой символ
 * (\0) в строке формата.
 * Если текущий символ (str[i]) является знаком процента (%), это означает,
 * что следующий символ является спецификатором формата.
 * print_length += ft_formats(args, str[i + 1]);
 * Функция ft_formats вызывается с текущим объектом va_list (args)
 * и следующим символом (str[i + 1]), который является спецификатором формата.
 * Результат ft_formats (количество напечатанных символов)
 * добавляется к print_length.
 * i++;
 * Индекс i увеличивается на два, чтобы перейти к следующему символу
 * после спецификатора формата.
 * 
 * Если текущий символ не является знаком процента, он считается обычным
 * символом. print_length += ft_printchar(str[i]);
 * Функция ft_printchar вызывается с текущим символом (str[i]),
 * чтобы напечатать его.
 * Результат ft_printchar (1, так как печатается один символ)
 * добавляется к print_length.
 * Индекс i увеличивается на один, чтобы перейти к следующему
 * символу в строке формата.
 * 
 * После завершения цикла while вызывается функция va_end для очистки объекта
 * va_list. Это важно для освобождения ресурсов, выделенных для обработки
 * переменных аргументов.
 * 
 * return (print_length); возвращает общее количество напечатанных символов
 */

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
