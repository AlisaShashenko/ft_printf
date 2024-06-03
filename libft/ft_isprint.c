/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:45:49 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:45:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_isprint(16));
	printf("%d\n", ft_isprint('~'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('a'));
	return (0);
}*/
