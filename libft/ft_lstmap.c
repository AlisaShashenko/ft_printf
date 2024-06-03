/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:44:28 by user              #+#    #+#             */
/*   Updated: 2024/05/10 15:09:54 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) The function is designed to create a new list that is a
 * representation of the original list. In other words, it traverses the
 * original list, applies the specified function to each element, and adds
 * the result to the new list.
 * 
 * @param lst Pointer to the first element of the source list.
 * @param f Pointer to the function that will be applied to each element
 * of the source list.
 * @param del Pointer to the memory release function that will be used to
 * release the memory allocated for the items in the new list in case of an
 * error.
 * @return t_list* 
 */
/**
 * @brief (RU) Функция предназначена для создания нового списка, который
 * является отображением исходного списка.
 * Другими словами, она проходит по исходному списку, применяет к каждому
 * элементу указанную функцию и добавляет результат в новый список.
 * 
 * @param lst Указатель на первый элемент исходного списка.
 * @param f казатель на функцию, которая будет применяться к каждому
 * элементу исходного списка.
 * @param del Указатель на функцию освобождения памяти, которая будет
 * использоваться для освобождения памяти, выделенной для элементов нового
 * списка в случае ошибки.
 * @return t_list* 
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

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	free(*lst);
	*lst = NULL;
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
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*content;

	first = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		if (content == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new = ft_lstnew(content);
		if (new == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

/*void	*ft_map(void *content)
{
	if (!*(char *)content)
		return (0);
	return ("beautiful!");
}

void	ft_del(void *content)
{
	free(content);
	printf("\nfree~\n");
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	t_list	*new_lst;
	new_lst = ft_lstmap(lst, ft_map, ft_del);
	while (new_lst)
	{
		printf("\nlst = %s, new_lst = %s\n\n", lst->content, new_lst->content);
		new_lst = new_lst->next;
		lst = lst->next;
	}
}*/
