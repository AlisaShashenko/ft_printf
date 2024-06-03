/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:46:07 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:46:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_isascii(6));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii('B'));
	printf("%d\n", ft_isascii(' '));
	return (0);
}*/
