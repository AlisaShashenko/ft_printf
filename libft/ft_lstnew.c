/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:44:11 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:44:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It allocates memory for the new element, initializes its fields,
 * and returns a pointer to it.
 * @return t_list* This declares a pointer variable named ret that will
 * hold the address of the newly created linked list element (node).
 */

/**
 * @brief (RU)Функция ft_lstnew создает новый элемент списка, выделяет для
 * него память и инициализирует его поля.
 * @return t_list *ret: Здесь объявляется переменная-указатель ret,
 * которая будет хранить адрес только что созданного элемента (узла)
 * связного списка.
 * ret = malloc(sizeof(t_list));: Эта строка выделяет память для нового
 * элемента связанного списка с помощью malloc. Размер выделяемой памяти
 * равен sizeof(t_list), что представляет собой размер структуры t_list
 * в байтах. Если выделение прошло успешно, malloc возвращает указатель
 * на выделенный блок памяти, который присваивается ret. Если выделение
 * не удалось (недостаточно памяти), malloc возвращает NULL.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}

/*int	main()
{
	char	*str = "Hello, world!";
	t_list	*elem = ft_lstnew((void *)str);

	while (elem != NULL)
	{
		printf("Content of the new element: %s\n", elem -> content);
		elem = elem -> next;
	}
	free(elem);
	return (0);
}*/
