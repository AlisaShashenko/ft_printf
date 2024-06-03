/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:44:00 by user              #+#    #+#             */
/*   Updated: 2024/05/10 14:05:08 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN)The function is designed to calculate the number of elements
 * (nodes) in a linked list.
 * @param lst This is a pointer to the first element (head) of the linked list.
 * By following the next pointers in each node, the function can traverse
 * the entire list and count the elements.
 * @return int This variable will be used as a counter to keep track of the
 * number of elements found in the list.
 */
/**
 * @brief (RU) функция предназначена для подсчета количества элементов (узлов)
 * в связанном списке.
 * 
 * @param lst Это указатель на первый элемент (голову) связанного списка.
 * Следуя за следующими указателями в каждом узле, функция может обойти весь
 * список и подсчитать элементы.
 * @return int Эта переменная будет использоваться в качестве счетчика
 * для отслеживания количества элементов, найденных в списке.
 */

/*t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/*int	main()
{
	t_list	*head = NULL;
	char	*str = "Hello, world!";
	t_list	*elem = ft_lstnew((void *)str);

	ft_lstadd_front(&elem, ft_lstnew((void *)str));
	int	list_size = ft_lstsize(elem);

	while (elem != NULL)
	{
		printf("Content of the new element: %s\n", elem -> content);
		elem = elem -> next;
	}
	printf("List size: %d\n", list_size);
	free(elem);
	return (0);
}*/
