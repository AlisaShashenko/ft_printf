/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:44:59 by user              #+#    #+#             */
/*   Updated: 2024/05/10 14:06:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstdelone destroys one element in a linked list.
 * 
 * @param lst Pointer to the pointer to the node to be deleted
 * @param del Pointer to the function that will be called to free the
 * memory allocated for the item being deleted.
 */

/**
 * @brief (RU) ft_lstdelone уничтожает один элемент в связном списке.
 * 
 * @param lst Указатель на указатель на узел, который нужно удалить
 * Важно: lst - это указатель на указатель, так как он должен изменить
 * сам указатель на узел.
 * @param del Указатель на функцию, которая будет вызвана для
 * освобождения памяти, выделенной для удаляемого элемента.
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
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

/*void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	char	*str = ft_strdup("Hello");
	char	*str1 = ft_strdup("world");
	t_list	*lst = ft_lstnew(str);
	t_list	*lst1 = ft_lstnew(str1);

	printf("After: %s %s\n", str, str1);

	ft_lstdelone(lst1, ft_del);

	printf("Before: %s\n %s\n", str, str1);
	return (0);
}*/
