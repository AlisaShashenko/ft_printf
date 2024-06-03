/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:45:11 by user              #+#    #+#             */
/*   Updated: 2024/05/10 14:07:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstclear clears the entire linked list, destroying
 * all elements in it.
 * 
 * @param lst Pointer to the pointer to the beginning of the list
 * @param del Pointer to the function that will be called to free
 * the memory allocated for the contents of each element.
 * 
 */

/**
 * @brief (RU) Функция ft_lstclear очищает весь связный список, уничтожая все
 * элементы в нем.
 * 
 * @param lst Указатель на указатель на начало списка.
 * @param del Указатель на функцию, которая будет вызвана для освобождения
 * памяти, выделенной для содержимого каждого элемента.
 */

/*size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) +1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i ++;
	}
	dest[i] = 0;
	return (dest);
}

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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}*/

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

/*void	ft_del(void *content)
{
	free(content);
	printf("\nfree~\n");
}

int	main(void)
{
	char	*str = ft_strdup("Hello");
	char	*str1 = ft_strdup("world");
	t_list	*lst = ft_lstnew(str);
	ft_lstadd_back(&lst, ft_lstnew(str1));

	printf("%s\n%s\n", str, str1);

	ft_lstclear(&lst, ft_del);
	return (0);
}*/
