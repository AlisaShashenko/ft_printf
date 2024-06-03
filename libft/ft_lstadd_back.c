/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:45:31 by user              #+#    #+#             */
/*   Updated: 2024/05/10 14:03:53 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstadd_back inserts a new element at the end of the
 * linked list.
 * 
 * @param lst A pointer to a pointer to the beginning of the list.
 * @param new Pointer to the new node to be inserted.
 */

/**
 * @brief Функция ft_lstadd_back вставляет новый элемент в конец
 * связного списка.
 * 
 * @param lst Указатель на указатель на начало списка
 * @param new Указатель на новый узел, который будет вставлен.
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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (!lst || !new)
		return ;
	last_elem = ft_lstlast(*lst);
	if (!last_elem)
		*lst = new;
	else
		last_elem->next = new;
}

/*int	main()
{
	t_list	*head = NULL;
	t_list	*element1 = ft_lstnew("Element 1");
	t_list	*element2 = ft_lstnew("Element 2");
	t_list	*element3 = ft_lstnew("Element 3");
	t_list	*element4 = ft_lstnew("Element 4");
	t_list	*element5 = ft_lstnew("Element 5");
	t_list	*element6 = ft_lstnew("Element 6");

	ft_lstadd_front(&head, element3);
	ft_lstadd_front(&head, element2);
	ft_lstadd_front(&head, element1);
	printf("Elements add_front:\n %s\n %s\n %s\n", element1->content,
		element2->content, element3->content);

	ft_lstadd_back(&head, element6);
	ft_lstadd_back(&head, element5);
	ft_lstadd_back(&head, element4);
	printf("Elements add_back:\n %s\n %s\n %s\n", element6->content,
		element5->content, element4->content);

	int	size = ft_lstsize(head);
	printf("The list size of elements: %d\n", size);

	t_list *last_element = ft_lstlast(head);
	printf("El último elemento de la lista es: %s\n", last_element->content);
}*/
