/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:46:53 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:46:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) allocates memory and fills it with 0 value
 * @param count This is an unsigned integer value that specifies the number
 * of elements to allocate in the array.
 * @param size This is another unsigned integer value that specifies the size
 * (in bytes) of each element in the array.
 */
/**
 * @brief (RU)выделяет память и заполняет выделенные ячейки значением 0
 * в отличии от ft_bzero может поместить в ячейки нужное значение
 * calloc возвращает NULL, если память не может быть выделена, что позволяет
 * обрабатывать ошибки выделения памяти.
 * не подходит для строк, для строк используйте функцию malloc с последующим
 * ручным заполнением нулевыми значениями с помощью memset.
 * 
 * @param count Это целое беззнаковое значение, задающее количество элементов,
 * которые необходимо выделить в массиве.
 * @param size Это еще одно целое беззнаковое значение, определяющее размер
 * (в байтах) каждого элемента массива.
 * @return void* Этот указатель указывает на начало выделенного и
 * нуль-инициализированного блока памяти.
 */

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

/*int main()
{
  // Выделить массив из 10 целых чисел с помощью calloc
  int *numbers = ft_calloc(10, sizeof(int));
  int i;

  if (numbers == NULL)
  {
    printf("Ошибка выделения памяти!\n");
    exit(1);
  }

  //Заполнить массив значениями
  i = 0;
  while (i < 10)
  {
    i++;
    numbers[i] = i * i;
  }

  // Вывести массив
  i = 0;
  while (i < 10)
  {
    i++;
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // Освободить память, выделенную с помощью calloc
  free(numbers);

  return (0);
}*/