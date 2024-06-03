/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:38:44 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:38:46 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*int	main()
{
	char 	c, result;
	
	c = 'B';
	result = ft_tolower(c);
	printf("%c\n", result);

	c = 'a';
	result = ft_tolower(c);
	printf("%c\n", result);

	c = '-';
	result = ft_tolower(c);
	printf("%c\n", result);
	return (0);
}*/