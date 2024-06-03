/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:38:22 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:38:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int	main()
{
	char str[] = "Hola Malaga -- t42!";
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i ++;
		str[i] = ft_toupper(str[i]);
	}
	printf("%s\n", str);
	return (0);
}*/