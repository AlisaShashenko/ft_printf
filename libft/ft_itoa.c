/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:45:40 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:45:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function converts an integer (n) into its string representation.
 * @param len Integer variable to store the length of the resulting string
 * (including sign, if any). 
 * @param str Character pointer variable. It will be used to store the
 * converted string. It's allocated memory using malloc based on the calculated
 * len plus 1 
 * @param nb Long integer variable to hold a copy of n. This is done to avoid
 * modifyingthe original n during calculations, especially for negative numbers.
 */

/**
 * @brief (RU) ft_itoa (function to integer to array) преобразует целое число
 * (int) в строковое представление.
 * @param len Целочисленная переменная для хранения длины результирующей
 * строки (включая знак, если таковой имеется).
 * @param str Переменная-указатель символов. Она будет использоваться
 * для хранения преобразованной строки. Память для нее выделяется с помощью
 * malloc на основе вычисленного len плюс 1 
 * @param nb Длинная целочисленная переменная для хранения копии n.
 * Это делается для того, чтобы избежать модификации исходного n во время
 * вычислений, особенно для отрицательных чисел.
 */

size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_nb_len(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

/*int main()
{
    int		number = 12345;
    char	str[10]; //Буфер для хранения строки

	printf("%d\n", number);
	printf("%s\n", str);

//Преобразование числа в строку
	char	*str_ptr = ft_itoa(number);//Сохранить возвращаемое значение

    if (str_ptr)
	{ //Проверка на NULL
		printf("Число в строковом формате: %s\n", str_ptr); //Отобразить строку
		free(str_ptr); //Освободить память
	}
	else
	{
		printf("Ошибка преобразования числа в строку.\n");
	}
	return (0);
}*/