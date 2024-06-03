/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:46:21 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:46:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*returns true when it is a letter and false if it is a symbol or number*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
/*int	main(void)
{
	printf("is alpha? %d\n", ft_isalpha('6'));
	printf("is alpha? %d\n", ft_isalpha('F'));
	printf("is alpha? %d\n", ft_isalpha('x'));
	printf("is alpha? %d\n", ft_isalpha('!'));
	return (0);
}*/