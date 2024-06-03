/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:45:22 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:45:24 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstadd_front used to add a new element to the beginning of a
 * linked list in C.
 * @param lst A double pointer to the head (first element) of the linked list.
 * This pointer will be modified to point to the newly added element.
 * @param new A pointer to the new element to be inserted at the front of
 * the list.
 */
/**
 * @brief (RU) используется для добавления нового элемента в начало
 * связного списка.
 * @param lst Указатель на первый элемент существующего списка, к которому
 * вы хотите добавить новый элемент.
 * @param new Указатель на новый элемент, который вы хотите добавить.
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
}*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main()
{
	char	*str = "Hello, world!";
	t_list	*elem = ft_lstnew((void *)str);

	ft_lstadd_front(&elem, ft_lstnew((void *)str));

	while (elem != NULL)
	{
		printf("Content of the new element: %s\n", elem -> content);
		elem = elem -> next;
	}
	free(elem);
	return (0);
}*/
