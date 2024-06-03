/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:44:47 by user              #+#    #+#             */
/*   Updated: 2024/05/10 14:05:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is intended for sequential traversal of elements of a linked
 * list and application of a specified function to each element.
 * 
 * @param lst Pointer to the first element of the list.
 * @param f Pointer to a function that will be applied to each element
 * of the list. This function must take one argument of type void *,
 * which will contain the data address of the element.
 */
/**
 * @brief (RU) ft_lstiter предназначена для последовательного обхода
 * элементов связного списка и применения к каждому элементу заданной функции. 
 * 
 * @param lst Указатель на первый элемент списка.
 * @param f Указатель на функцию, которая будет применяться к каждому элементу
 * списка. Эта функция должна принимать один аргумент типа void *, который
 * будет содержать адрес данных элемента.
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
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	f_iter(void *content)
{
	char	*cont = (char*)content; // Преобразовать content к char *
	for (int i = 0; cont[i]; i++)
	{
		if (i % 2)
			cont[i] = '-';
	}
	printf("%s\n", content); // Печатать всю строку (не символы)
}

int	main(void)
{
	char	*str = ft_strdup("Hello");
	char	*str1 = ft_strdup("annong~");
	t_list	*lst = ft_lstnew(str);

	ft_lstadd_back(&lst, ft_lstnew(str1));

	ft_lstiter(lst, f_iter);
}*/