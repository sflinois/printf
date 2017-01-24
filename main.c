/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sflinois <sflinois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:10:17 by sflinois          #+#    #+#             */
/*   Updated: 2017/01/24 16:44:37 by sflinois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libft.h"

int		main(void)
{
	long long int	i = -42;
	ft_putstr("printf : \n");
	printf("%#.7o\n", i);
	printf("%#.7u\n", i);
	printf("%#.7X\n", i);
	printf("%#.2X\n", 1);
	ft_putstr("ft_printf : \n");
	ft_printf("%#.7o\n", i);
	ft_printf("%#.7u\n", i);
	ft_printf("%#.7X\n", i);
	ft_printf("%#.2X\n", 1);

	//ft_printf("%d\n", i);
	//ft_printf("%o\n", i);
	//ft_printf("%u\n", i);
	//ft_printf("%X\n", i);

//	printf(" %-10d \n", 10);
//	printf(" %d \n", 10);
//	printf(" %-#10x \n", 10);
//	printf(" %#x \n", 10);
	return 0;
}
