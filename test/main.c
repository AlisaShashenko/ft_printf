/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:23:40 by user              #+#    #+#             */
/*   Updated: 2024/05/28 17:59:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	unsigned int	num;
	int				len;

	num = 255;
	len = ft_hex_len(num);

	ft_printf("Number %u in hexadecimal format: %X\n", num, num);
	ft_printf("Number of hexadecimal characters: %d\n", len);
	ft_printf("This is char my ft_printf: %c\n", 'C');
	ft_printf("This is str my ft_printf: %s\n", "Hello i am string!");
	ft_printf("This is number desimal my ft_printf: %d\n", 5);
	ft_printf("This is number desimal my ft_printf: %i\n", 12);
	return (0);
}
