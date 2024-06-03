/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:39:06 by user              #+#    #+#             */
/*   Updated: 2024/05/10 18:30:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is designed to remove spaces (and other characters) 
 * from both ends of the string s1.
 * 
 * @param s1 Pointer to the source string.
 * @param set Pointer to the string containing the characters to be deleted
 * @return char* Pointer to a new line with the s1 substring trimmed.
 */
/**
 * @brief (RU) предназначена для удаления пробелов (и других символов)
 * с обоих концов строки s1.
 * 
 * @param s1 Указатель на исходную строку.
 * @param set Указатель на строку, содержащую символы, которые нужно удалить
 * @return char* Указатель на новую строку с обрезанной подстрокой s1.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*res;
	int			i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end -1]))
		end --;
	res = (char *)malloc(sizeof(char) * (end - start +1));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

/*int main() {
  printf("%s\n", ft_strtrim("abqbc", "abc"));
  printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));

  return 0;
}*/
