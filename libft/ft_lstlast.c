/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:44:39 by user              #+#    #+#             */
/*   Updated: 2024/05/10 14:03:02 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is a function used to obtain a pointer to the last element
 * of a linked list.
 * @param lst parameter a pointer to the first element of the linked list
 */
/**
 * @brief (RU) Функция предназначена для получения указателя на последний
 * элемент связного списка.
 * 
 * @param lst указатель на первый элемент списка
 * @return t_list* указатель на последний элемент
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
}

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
}*/

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}

/*int	main()
{
	t_list	*head = NULL;
	t_list	*element1 = ft_lstnew("Element 1");
	t_list	*element2 = ft_lstnew("Element 2");
	t_list	*element3 = ft_lstnew("Element 3");

	ft_lstadd_front(&head, element3);
	ft_lstadd_front(&head, element2);
	ft_lstadd_front(&head, element1);
	int	size = ft_lstsize(head);
	printf("Number of elements: %d\n", size);
	printf("Contenido de la lista:\n %s\n %s\n %s\n", element1->content,
		element2->content, element3->content);

	t_list *last_element = ft_lstlast(head);
	printf("El último elemento de la lista es: %s\n", last_element->content);
}*/
