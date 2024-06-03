/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:45:57 by user              #+#    #+#             */
/*   Updated: 2024/05/10 12:46:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*returns true when it is a number and false if it is a symbol or letter*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isdigit(6));
	return (0);
}*/
